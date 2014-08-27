#!/usr/bin/env python

import urllib
import string
import os
import sys
import LaunchOnCondor
import glob

CMSSW_VERSION = os.getenv('CMSSW_VERSION','CMSSW_VERSION')
if CMSSW_VERSION == 'CMSSW_VERSION':
  print 'please setup your CMSSW environement'
  sys.exit(0)

print 'OPTIMIZATION'
FarmDirectory = "FARM"
JobName = "HSCPTOFCheck"
LaunchOnCondor.Jobs_RunHere = 1
LaunchOnCondor.SendCluster_Create(FarmDirectory, JobName)
f= open('../../ICHEP_Analysis/Analysis_Samples.txt','r')
index = -1
for line in f :
      index+=1
      vals=line.split(',')
      if((vals[0].replace('"','')) in CMSSW_VERSION):
         LaunchOnCondor.SendCluster_Push(["FWLITE", os.getcwd()+"/TOFCheck.C", '"ANALYSE_'+str(index)+'_to_'+str(index)+'"'])
f.close()
LaunchOnCondor.SendCluster_Submit()
