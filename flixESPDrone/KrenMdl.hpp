#ifndef __KrenMdl_HPP
#define __KrenMdl_HPP

void integr(float dt, float inp, float tm, float& out);
void intert(float dt, float inp, float k, float tm, float& out);
void rldiff(float dt, float dinp, float tdf, float tm, float& out);
void saturate(float& val, float min, float max);

class KrenMdl {
protected:
public:
  float mTf;
  float mTv;
  float mTm;
  float mFi;
  float mVi;
  float mAc;
  float mPreAc;

  KrenMdl();
  KrenMdl(float Tf, float Tv, float Tm);
  
  void setParam (float Tf, float Tv, float Tm);
  float getFi();
  float getVi();
  float getTr();
  float updateMdl(float dt, float inp);
  char* print(char* msg);
};

#endif /* __KrenMdl_HPP */
