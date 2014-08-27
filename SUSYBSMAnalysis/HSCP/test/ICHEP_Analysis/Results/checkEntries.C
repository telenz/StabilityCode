#include <iostream>
#include "TFile.h"
#include "TString.h"
#include "TDirectoryFile.h"
#include "TH2F.h"


int checkEntries(){

  TString fileName, typeName;
  TFile *file;
  TDirectoryFile* dicFile;
  TH2F *Mass;

  for(int i=0; i<35; i++){
    for(int type=0; type<2; type++){

      if(type==0) typeName = "Type0";
      else        typeName = "Type2";
      fileName = (TString) typeName + (TString) "/Histos_pMSSM12_MCMC1_30_549144_" + (long) i + "_pMSSM12_MCMC1_30_549144_" + (long) i + (TString) ".root";    
      // fileName = (TString) typeName + (TString) "/Histos_Events_pMSSM12_MCMC1_30_549144_" + (long) i + (TString) ".root";    
      file =  TFile::Open(fileName);
      if(file==0) continue;
      file    -> GetObject(Form("pMSSM12_MCMC1_30_549144_%i",i),dicFile);
      //file    -> GetObject("Events",dicFile);
      dicFile -> GetObject("Mass",Mass);
      
      cout<<typeName<<": entries in "<<i<<". sample: "<<Mass->GetEntries()<<endl;
    }
  }


  return 0;



}
