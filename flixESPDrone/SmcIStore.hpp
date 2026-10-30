#ifndef __SmcIStore_HPP
#define __SmcIStore_HPP

// SMC-I pitch params (Flash Smi*), separate from PD-PI PTE/PKPF/…
struct SmcIStore {
	float mTe, mTm, mTv, mTf, mTi;
	float Kpf, Kpv, Kdv;
	float klmf, klmv;
	float phi;  // boundary layer Φ for tanh(s/Φ)
};

#endif
