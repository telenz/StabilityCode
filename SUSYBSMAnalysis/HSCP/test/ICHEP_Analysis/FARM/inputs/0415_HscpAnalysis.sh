#! /bin/sh
####################################
#        LaunchOnFarm Script       #
#     Loic.quertenmont@cern.ch     #
#            April 2010            #
####################################

export SCRAM_ARCH=slc5_amd64_gcc462
export BUILD_ARCH=slc5_amd64_gcc462
export VO_CMS_SW_DIR=/nfs/soft/cms
cd /afs/cern.ch/work/t/telenz/CMSSW_5_3_7_patch4/src/SUSYBSMAnalysis/HSCP/test/ICHEP_Analysis
eval `scramv1 runtime -sh`
root -l -b << EOF
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
   .x /afs/cern.ch/work/t/telenz/CMSSW_5_3_7_patch4/src/SUSYBSMAnalysis/HSCP/test/ICHEP_Analysis/Analysis_Step3.C+("ANALYSE_479_to_479", 2, "dedxASmi", "dedxHarm2", "combined", 0.0, 0.0, 0.0, 45, 2.1)
   .q
EOF

mv HscpAnalysis* /afs/cern.ch/work/t/telenz/CMSSW_5_3_7_patch4/src/SUSYBSMAnalysis/HSCP/test/ICHEP_Analysis/FARM/outputs/
