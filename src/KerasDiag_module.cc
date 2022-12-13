//
// This module calls the TMVA_SOFIE_TrainBkg inference function 
// Original author David Brown, 12/2/2022
//
// framework
#include "art/Framework/Principal/Event.h"
#include "art/Framework/Core/EDAnalyzer.h"
#include "SOFIETest/inc/TrainBkg.hxx"
#include "Offline/ConfigTools/inc/ConfigFileLookupPolicy.hh"
#include <iostream>

namespace mu2e {

  class KerasDiag : public art::EDAnalyzer
  {
    public:
      using Name=fhicl::Name;
      using Comment=fhicl::Comment;

      struct Config {
	fhicl::Atom<std::string> wname{Name("WeightFileName"), Comment("Weight file name")};
      };
      using Parameters = art::EDAnalyzer::Table<Config>;
      explicit KerasDiag(Parameters const& config);
      virtual ~KerasDiag();
      void analyze( art::Event const & e) override;
      void beginJob ( ) override;
    private:
    TMVA_SOFIE_TrainBkg::Session* _session;
  };

  KerasDiag::KerasDiag(Parameters const& config) :
    art::EDAnalyzer(config)
  {
    ConfigFileLookupPolicy configFile;
    auto mvaWgtsFile = configFile(config().wname());
    _session = new TMVA_SOFIE_TrainBkg::Session(mvaWgtsFile);
  }

  KerasDiag::~KerasDiag() {}

  void KerasDiag::beginJob(){
//    art::ServiceHandle<art::TFileService> tfs;
  }

  void KerasDiag::analyze(art::Event const& event) {
    std::vector<float> inputs = {0.7,0.3,0.331,21,0.001,0.25,200.0,180.0,500.0 };
    auto outputs = _session->infer(inputs.data());
    std::cout << "Output size " << outputs.size();
    for(size_t ival = 0; ival < outputs.size(); ++ival){
      std::cout << std::endl << "Index " << ival << " Value " << outputs[ival];
    }
    std::cout << std::endl;
  }
}

using mu2e::KerasDiag;
DEFINE_ART_MODULE(KerasDiag);

