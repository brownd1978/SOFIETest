//Code generated automatically by TMVA for Inference of Model file [KerasModel.h5] at [Wed Nov 30 00:03:06 2022] 
//

#include<algorithm>
#include<vector>
#include "TMVA/SOFIE_common.hxx"
#include "SOFIETest/inc/TMVA_SOFIE_KerasModel.hh"
#include <fstream>

namespace TMVA_SOFIE_KerasModel{
  Session::Session(std::string filename) {

    if (filename.empty()) filename = "KerasModel.dat";
    std::ifstream f;
    f.open(filename);
    if (!f.is_open()){
      throw std::runtime_error("tmva-sofie failed to open file for input weights");
    }
    std::string tensor_name;
    int length;
    f >> tensor_name >> length;
    if (tensor_name != "tensor_dense3bias0" ) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor name; expected name is tensor_dense3bias0 , read " + tensor_name;
      throw std::runtime_error(err_msg);
    }
    if (length != 4) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor size; expected size is 4 , read " + std::to_string(length) ;
      throw std::runtime_error(err_msg);
    }
    for (int i =0; i < length; ++i) 
      f >> tensor_dense3bias0[i];
    f >> tensor_name >> length;
    if (tensor_name != "tensor_dense3kernel0" ) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor name; expected name is tensor_dense3kernel0 , read " + tensor_name;
      throw std::runtime_error(err_msg);
    }
    if (length != 32) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor size; expected size is 32 , read " + std::to_string(length) ;
      throw std::runtime_error(err_msg);
    }
    for (int i =0; i < length; ++i) 
      f >> tensor_dense3kernel0[i];
    f >> tensor_name >> length;
    if (tensor_name != "tensor_dense2bias0" ) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor name; expected name is tensor_dense2bias0 , read " + tensor_name;
      throw std::runtime_error(err_msg);
    }
    if (length != 8) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor size; expected size is 8 , read " + std::to_string(length) ;
      throw std::runtime_error(err_msg);
    }
    for (int i =0; i < length; ++i) 
      f >> tensor_dense2bias0[i];
    f >> tensor_name >> length;
    if (tensor_name != "tensor_dense2kernel0" ) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor name; expected name is tensor_dense2kernel0 , read " + tensor_name;
      throw std::runtime_error(err_msg);
    }
    if (length != 128) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor size; expected size is 128 , read " + std::to_string(length) ;
      throw std::runtime_error(err_msg);
    }
    for (int i =0; i < length; ++i) 
      f >> tensor_dense2kernel0[i];
    f >> tensor_name >> length;
    if (tensor_name != "tensor_dense1bias0" ) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor name; expected name is tensor_dense1bias0 , read " + tensor_name;
      throw std::runtime_error(err_msg);
    }
    if (length != 16) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor size; expected size is 16 , read " + std::to_string(length) ;
      throw std::runtime_error(err_msg);
    }
    for (int i =0; i < length; ++i) 
      f >> tensor_dense1bias0[i];
    f >> tensor_name >> length;
    if (tensor_name != "tensor_dense1kernel0" ) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor name; expected name is tensor_dense1kernel0 , read " + tensor_name;
      throw std::runtime_error(err_msg);
    }
    if (length != 512) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor size; expected size is 512 , read " + std::to_string(length) ;
      throw std::runtime_error(err_msg);
    }
    for (int i =0; i < length; ++i) 
      f >> tensor_dense1kernel0[i];
    f >> tensor_name >> length;
    if (tensor_name != "tensor_densebias0" ) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor name; expected name is tensor_densebias0 , read " + tensor_name;
      throw std::runtime_error(err_msg);
    }
    if (length != 32) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor size; expected size is 32 , read " + std::to_string(length) ;
      throw std::runtime_error(err_msg);
    }
    for (int i =0; i < length; ++i) 
      f >> tensor_densebias0[i];
    f >> tensor_name >> length;
    if (tensor_name != "tensor_densekernel0" ) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor name; expected name is tensor_densekernel0 , read " + tensor_name;
      throw std::runtime_error(err_msg);
    }
    if (length != 2048) {
      std::string err_msg = "TMVA-SOFIE failed to read the correct tensor size; expected size is 2048 , read " + std::to_string(length) ;
      throw std::runtime_error(err_msg);
    }
    for (int i =0; i < length; ++i) 
      f >> tensor_densekernel0[i];
    f.close();
    {
      std::vector<size_t> oldShape = { 32 };
      std::vector<size_t> newShape = { 4 , 32 };
      float * newData_ptr = TMVA::Experimental::SOFIE::UTILITY::Unidirectional_broadcast<float>(tensor_densebias0, oldShape, newShape);
      std::copy(newData_ptr, newData_ptr + 128, tensor_densebias0bcast);
      delete [] newData_ptr;
    }
    {
      std::vector<size_t> oldShape = { 16 };
      std::vector<size_t> newShape = { 4 , 16 };
      float * newData_ptr = TMVA::Experimental::SOFIE::UTILITY::Unidirectional_broadcast<float>(tensor_dense1bias0, oldShape, newShape);
      std::copy(newData_ptr, newData_ptr + 64, tensor_dense1bias0bcast);
      delete [] newData_ptr;
    }
    {
      std::vector<size_t> oldShape = { 8 };
      std::vector<size_t> newShape = { 4 , 8 };
      float * newData_ptr = TMVA::Experimental::SOFIE::UTILITY::Unidirectional_broadcast<float>(tensor_dense2bias0, oldShape, newShape);
      std::copy(newData_ptr, newData_ptr + 32, tensor_dense2bias0bcast);
      delete [] newData_ptr;
    }
    {
      std::vector<size_t> oldShape = { 4 };
      std::vector<size_t> newShape = { 4 , 4 };
      float * newData_ptr = TMVA::Experimental::SOFIE::UTILITY::Unidirectional_broadcast<float>(tensor_dense3bias0, oldShape, newShape);
      std::copy(newData_ptr, newData_ptr + 16, tensor_dense3bias0bcast);
      delete [] newData_ptr;
    }
  }

  std::vector<float> Session::infer(float* tensor_input1){

    //--------- Gemm
    char op_0_transA = 'n';
    char op_0_transB = 'n';
    int op_0_m = 4;
    int op_0_n = 32;
    int op_0_k = 64;
    float op_0_alpha = 1;
    float op_0_beta = 1;
    int op_0_lda = 64;
    int op_0_ldb = 32;
    std::copy(tensor_densebias0bcast, tensor_densebias0bcast + 128, tensor_denseBiasAdd0);
    BLAS::sgemm_(&op_0_transB, &op_0_transA, &op_0_n, &op_0_m, &op_0_k, &op_0_alpha, tensor_densekernel0, &op_0_ldb, tensor_input1, &op_0_lda, &op_0_beta, tensor_denseBiasAdd0, &op_0_n);

    //------ RELU
    for (int id = 0; id < 128 ; id++){
      tensor_activationRelu0[id] = ((tensor_denseBiasAdd0[id] > 0 )? tensor_denseBiasAdd0[id] : 0);
    }

    //--------- Gemm
    char op_2_transA = 'n';
    char op_2_transB = 'n';
    int op_2_m = 4;
    int op_2_n = 16;
    int op_2_k = 32;
    float op_2_alpha = 1;
    float op_2_beta = 1;
    int op_2_lda = 32;
    int op_2_ldb = 16;
    std::copy(tensor_dense1bias0bcast, tensor_dense1bias0bcast + 64, tensor_dense1Dense);
    BLAS::sgemm_(&op_2_transB, &op_2_transA, &op_2_n, &op_2_m, &op_2_k, &op_2_alpha, tensor_dense1kernel0, &op_2_ldb, tensor_activationRelu0, &op_2_lda, &op_2_beta, tensor_dense1Dense, &op_2_n);

    //------ RELU
    for (int id = 0; id < 64 ; id++){
      tensor_dense1Relu0[id] = ((tensor_dense1Dense[id] > 0 )? tensor_dense1Dense[id] : 0);
    }

    //--------- Gemm
    char op_4_transA = 'n';
    char op_4_transB = 'n';
    int op_4_m = 4;
    int op_4_n = 8;
    int op_4_k = 16;
    float op_4_alpha = 1;
    float op_4_beta = 1;
    int op_4_lda = 16;
    int op_4_ldb = 8;
    std::copy(tensor_dense2bias0bcast, tensor_dense2bias0bcast + 32, tensor_dense2Dense);
    BLAS::sgemm_(&op_4_transB, &op_4_transA, &op_4_n, &op_4_m, &op_4_k, &op_4_alpha, tensor_dense2kernel0, &op_4_ldb, tensor_dense1Relu0, &op_4_lda, &op_4_beta, tensor_dense2Dense, &op_4_n);

    //------ RELU
    for (int id = 0; id < 32 ; id++){
      tensor_dense2Relu0[id] = ((tensor_dense2Dense[id] > 0 )? tensor_dense2Dense[id] : 0);
    }

    //--------- Gemm
    char op_6_transA = 'n';
    char op_6_transB = 'n';
    int op_6_m = 4;
    int op_6_n = 4;
    int op_6_k = 8;
    float op_6_alpha = 1;
    float op_6_beta = 1;
    int op_6_lda = 8;
    int op_6_ldb = 4;
    std::copy(tensor_dense3bias0bcast, tensor_dense3bias0bcast + 16, tensor_dense3BiasAdd0);
    BLAS::sgemm_(&op_6_transB, &op_6_transA, &op_6_n, &op_6_m, &op_6_k, &op_6_alpha, tensor_dense3kernel0, &op_6_ldb, tensor_dense2Relu0, &op_6_lda, &op_6_beta, tensor_dense3BiasAdd0, &op_6_n);

    //------ RELU
    for (int id = 0; id < 16 ; id++){
      tensor_reluRelu0[id] = ((tensor_dense3BiasAdd0[id] > 0 )? tensor_dense3BiasAdd0[id] : 0);
    }
    std::vector<float> ret (tensor_reluRelu0, tensor_reluRelu0 + 16);
    return ret;
  }

} //TMVA_SOFIE_KerasModel

