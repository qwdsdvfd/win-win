#ifndef __KrenCtrl_HPP
#define __KrenCtrl_HPP

#include "KrenMdl.hpp"

#define _slCtrl_2PD    1
#define _slCtrl_Slide  3

class KrenCtrl : public KrenMdl {
public:
  float Us=0, Ui=0, mdVi=0, Uv=0, Um=0, Umm=0, erVi1= 0;
  float muMd = 0;
  float uMold = 0;
  float klmf,
        klmv,
        Kpf,
        Kpv,
        Kdv,
        mTmu,
        mTe,
        mTi,
        slidePhi;
  int CtrlType  = 0;
  void UdateKalman(float Fi, float Vi);
  KrenCtrl(float Tf, float Tv, float Tm, float Tmi);
  KrenCtrl();
  float updateCtrl(float dt, float setFi, float Fi, float Vi);
  void reset();
};

#endif /* __KrenCtrl_HPP */
