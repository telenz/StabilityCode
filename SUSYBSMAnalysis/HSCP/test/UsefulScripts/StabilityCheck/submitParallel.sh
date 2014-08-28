#!bash/bin

export SCRIPTPATH=`pwd -P`

#script=`pwd -P`
echo ${SCRIPTPATH}
MYVARS='$SCRIPTPATH'

folder=testCheckedInVersion
mkdir ${folder}

num=0

while read line

  do

  echo $num   
#  if [ "$num" -ne 0 ]; then
#      break
#  fi
  num=$((num + 1))  
  
 # echo $line
  folderName=${line:56:22}
  #echo $folderName
  mkdir ${folder}/$folderName

  cd ${folder}/$folderName
  echo $line > Analysis_Samples.txt
  cp -rp /afs/cern.ch/user/t/telenz/Data8TeVGains.root .
  cp ../../StabilityCheck.C StabilityCheck.C 
  cp ../../StabilityCheck_C.d StabilityCheck_C.d 
  cp ../../StabilityCheck_C.so StabilityCheck_C.so 
  cp ../../StabilityCheck-bsub.sh StabilityCheck.sh
  cp ../../MakePlot.sh .
  cp ../../MakePlot.C .
  cp ../../tdrstyle.C .

  cat StabilityCheck.sh | sed -e "s/\${name}/${folderName}/" > StabilityCheck2.sh
  cat StabilityCheck2.sh | sed -e "s/\${folder2}/${folder}/" > StabilityCheck1.sh
  envsubst "$MYVARS" <StabilityCheck1.sh > StabilityCheck.sh
#  cat StabilityCheck1.sh | sed -e "s/\${script2}/\\${script}/" > StabilityCheck.sh
  
#  mv StabilityCheck1.sh StabilityCheck.sh

  source /afs/cern.ch/cms/cmsset_default.sh
  eval `scramv1 runtime -sh`
  source "/afs/cern.ch/sw/lcg/contrib/gcc/4.6/x86_64-slc6-gcc46-opt/setup.sh"
  path=${SCRIPTPATH}/${folder}/$folderName
  echo $path
  echo "bsub -q 1nd -J ${folderName} "sh $path/StabilityCheck.sh""
  bsub -q 1nd -J ${folderName} "sh $path/StabilityCheck.sh"

  cd ../..
  
  
done<Analysis_Samples.txt 

