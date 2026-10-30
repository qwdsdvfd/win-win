#include "KrenCtrl.hpp"
#include <math.h>

#define __SelCtrl _slCtrl_2PD

KrenCtrl::KrenCtrl(float Tf, float Tv, float Tm, float Tmi){
  (void)Tmi;
  CtrlType = __SelCtrl;
  mTi = 0.2;
  mTe = 0.04;
  mTmu = mTm;
  setParam(Tf, Tv, Tm);
}

KrenCtrl::KrenCtrl(){
  CtrlType = __SelCtrl;
  klmf = klmv = 0.1;
  slidePhi = 80.0f;
  mTi = 0.25;
  mTe = 0.1;
  mTmu = 0.05;
  mTm = 0.05;
}

void KrenCtrl::reset()
{
    Us = 0.0f;
    Uv = 0.0f;
    Ui = 0.0f;
    Um = 0.0f;
    Umm = 0.0f;
    erVi1 = 0.0f;
    mdVi  = 0.0f;
    muMd  = 0.0f;
    uMold = 0.0f;
    mFi = 0.0f;
    mVi = 0.0f;
}

void KrenCtrl::UdateKalman(float Fi, float Vi){
  mFi += (Fi - mFi) * klmf;
  mVi += (Vi - mVi) * klmv;
}

float KrenCtrl::updateCtrl(float dt, float setFi, float Fi, float Vi){
  UdateKalman(Fi, Vi);
  float erFi = setFi - mFi;
  float erVi = Kpf * erFi  - mVi;
  rldiff(dt, erVi - erVi1, 1.0, mTmu, mdVi); erVi1 = erVi;

  if (CtrlType == _slCtrl_2PD) {
    Us = erVi * Kpv + mdVi * Kdv;
  } else if (CtrlType == _slCtrl_Slide) {
    const float s = Kpv * erVi - Kdv * mdVi;
    const float phi = (slidePhi > 1e-6f) ? slidePhi : 80.0f;
    Us = 1000.0f * tanhf(s / phi);
  }
  Us -= Uv;
  saturate(Us, -1000.0,1000.0);
  integr(dt, Us, mTe, Uv);
  saturate(Uv, -1000.0,1000.0);
  integr(dt, Uv, mTi, Ui);
  saturate(Ui, -1000.0,1000.0);
  Um = Ui + Uv;
  saturate(Um, -1000.0,1000.0);

  intert(dt, Um,1.0,mTmu,Umm);
  rldiff(dt, Umm-uMold, mTmu, mTmu, muMd); uMold = Umm;
  updateMdl(dt, muMd);
  return Um;
}
