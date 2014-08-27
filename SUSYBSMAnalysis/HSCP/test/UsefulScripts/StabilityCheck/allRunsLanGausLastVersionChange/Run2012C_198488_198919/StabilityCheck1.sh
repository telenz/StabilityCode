#!/bin/bash/
ppp=/afs/cern.ch/user/t/telenz/work/CMSSW_5_3_14_patch2/src/SUSYBSMAnalysis/HSCP/test/UsefulScripts/StabilityCheck/${folder2}/Run2012C_198488_198919
cd $ppp
echo $ppp  
source /afs/cern.ch/cms/cmsset_default.sh
eval `scramv1 runtime -sh`
source "/afs/cern.ch/sw/lcg/contrib/gcc/4.6/x86_64-slc6-gcc46-opt/setup.sh"
root -l -b  << EOF
   TString makeshared(gSystem->GetMakeSharedLib());
   TString dummy = makeshared.ReplaceAll("-W ", "-Wno-deprecated-declarations -Wno-deprecated ");
   TString dummy = makeshared.ReplaceAll("-Wshadow ", " -std=c++0x ");
   cout << "Compilling with the following arguments: " << makeshared << endl;
   gSystem->SetMakeSharedLib(makeshared);
   gSystem->SetIncludePath("-I$ROOFITSYS/include");
   gSystem->Load("libFWCoreFWLite");
   AutoLibraryLoader::enable();
   gSystem->Load("libDataFormatsFWLite.so");
   gSystem->Load("libAnalysisDataFormatsSUSYBSMObjects.so");
   gSystem->Load("libDataFormatsVertexReco.so");
   gSystem->Load("libDataFormatsHepMCCandidate.so");
   gSystem->Load("libPhysicsToolsUtilities.so");
   gSystem->Load("libdcap.so");
   .X StabilityCheck.C+("Analyze") #1> output.txt 2>error_f.txt
   // .x MakePlot.C+
   .q
EOF #1> output.txt 2>error_f.txt
