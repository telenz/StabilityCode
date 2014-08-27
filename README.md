StabilityCode
=============

module to make stability plot


	mkdir StabilityCheck
	cd StabilityCheck
  	cmsrel CMSSW_5_3_14_patch2
	cd CMSSW_5_3_14_patch2
	git clone https://github.com/telenz/StabilityCode.git src/
	cd src
	cmsenv
	scram b -j24
	#end
