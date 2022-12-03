//Code generated automatically by TMVA for Inference of Model file [KerasModel.h5] at [Wed Nov 30 00:03:06 2022] 
//

#ifndef TMVA_SOFIE_KERASMODEL
#define TMVA_SOFIE_KERASMODEL

#include<algorithm>
#include<vector>
#include "TMVA/SOFIE_common.hxx"
#include <fstream>

namespace TMVA_SOFIE_KerasModel{
  namespace BLAS{
    extern "C" void sgemv_(const char * trans, const int * m, const int * n, const float * alpha, const float * A,
	const int * lda, const float * X, const int * incx, const float * beta, const float * Y, const int * incy);
    extern "C" void sgemm_(const char * transa, const char * transb, const int * m, const int * n, const int * k,
	const float * alpha, const float * A, const int * lda, const float * B, const int * ldb,
	const float * beta, float * C, const int * ldc);
  }//BLAS
  struct Session {
    Session(std::string filename ="");

    std::vector<float> fTensor_dense3bias0 = std::vector<float>(4);
    float * tensor_dense3bias0 = fTensor_dense3bias0.data();
    std::vector<float> fTensor_dense3kernel0 = std::vector<float>(32);
    float * tensor_dense3kernel0 = fTensor_dense3kernel0.data();
    std::vector<float> fTensor_dense2bias0 = std::vector<float>(8);
    float * tensor_dense2bias0 = fTensor_dense2bias0.data();
    std::vector<float> fTensor_dense2kernel0 = std::vector<float>(128);
    float * tensor_dense2kernel0 = fTensor_dense2kernel0.data();
    std::vector<float> fTensor_dense1bias0 = std::vector<float>(16);
    float * tensor_dense1bias0 = fTensor_dense1bias0.data();
    std::vector<float> fTensor_dense1kernel0 = std::vector<float>(512);
    float * tensor_dense1kernel0 = fTensor_dense1kernel0.data();
    std::vector<float> fTensor_densebias0 = std::vector<float>(32);
    float * tensor_densebias0 = fTensor_densebias0.data();
    std::vector<float> fTensor_densekernel0 = std::vector<float>(2048);
    float * tensor_densekernel0 = fTensor_densekernel0.data();
    std::vector<float> fTensor_reluRelu0 = std::vector<float>(16);
    float * tensor_reluRelu0 = fTensor_reluRelu0.data();
    std::vector<float> fTensor_dense3BiasAdd0 = std::vector<float>(16);
    float * tensor_dense3BiasAdd0 = fTensor_dense3BiasAdd0.data();
    std::vector<float> fTensor_dense2Dense = std::vector<float>(32);
    float * tensor_dense2Dense = fTensor_dense2Dense.data();
    std::vector<float> fTensor_dense2Relu0 = std::vector<float>(32);
    float * tensor_dense2Relu0 = fTensor_dense2Relu0.data();
    std::vector<float> fTensor_dense1Dense = std::vector<float>(64);
    float * tensor_dense1Dense = fTensor_dense1Dense.data();
    std::vector<float> fTensor_dense1bias0bcast = std::vector<float>(64);
    float * tensor_dense1bias0bcast = fTensor_dense1bias0bcast.data();
    std::vector<float> fTensor_dense3bias0bcast = std::vector<float>(16);
    float * tensor_dense3bias0bcast = fTensor_dense3bias0bcast.data();
    std::vector<float> fTensor_dense1Relu0 = std::vector<float>(64);
    float * tensor_dense1Relu0 = fTensor_dense1Relu0.data();
    std::vector<float> fTensor_activationRelu0 = std::vector<float>(128);
    float * tensor_activationRelu0 = fTensor_activationRelu0.data();
    std::vector<float> fTensor_denseBiasAdd0 = std::vector<float>(128);
    float * tensor_denseBiasAdd0 = fTensor_denseBiasAdd0.data();
    std::vector<float> fTensor_dense2bias0bcast = std::vector<float>(32);
    float * tensor_dense2bias0bcast = fTensor_dense2bias0bcast.data();
    std::vector<float> fTensor_densebias0bcast = std::vector<float>(128);
    float * tensor_densebias0bcast = fTensor_densebias0bcast.data();
    std::vector<float> infer(float* tensor_input1);
  };
}
#endif  // TMVA_SOFIE_KERASMODEL
