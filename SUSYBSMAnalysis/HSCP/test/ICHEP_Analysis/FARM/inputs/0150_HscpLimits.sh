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
   gSystem->SetIncludePath( "-I$ROOFITSYS/include" );
   .x /afs/cern.ch/work/t/telenz/CMSSW_5_3_7_patch4/src/SUSYBSMAnalysis/HSCP/test/ICHEP_Analysis/Analysis_Step6.C+("COMBINE", "Results/Type0/",  "pMSSM12_MCMC1_30_549144_m600_width0" )
   .q
EOF

mv HscpLimits* /afs/cern.ch/work/t/telenz/CMSSW_5_3_7_patch4/src/SUSYBSMAnalysis/HSCP/test/ICHEP_Analysis/FARM/outputs/
