####################################
#        LaunchOnFarm Script       #
#     Loic.quertenmont@cern.ch     #
#            April 2010            #
####################################

bsub -q 2nd -J HscpPred0000_ '/afs/cern.ch/work/t/telenz/CMSSW_5_3_7_patch4/src/SUSYBSMAnalysis/HSCP/test/ICHEP_Analysis/FARM/inputs/0000_HscpPred.sh 0 ele'
bsub -q 2nd -J HscpPred0001_ '/afs/cern.ch/work/t/telenz/CMSSW_5_3_7_patch4/src/SUSYBSMAnalysis/HSCP/test/ICHEP_Analysis/FARM/inputs/0001_HscpPred.sh 0 ele'
