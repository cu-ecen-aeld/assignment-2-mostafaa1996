#!/bin/bash

if [ $# -ne 2 ];then
   echo "Usage: $0 <writefile> <writestr>"
   exit 1
fi

writefile=$1
writestr=$2
directPath=$(dirname "$writefile")

if [ ! -d "$directPath" ];then
   mkdir -p "$directPath"
fi
   touch "$writefile"
   echo "$writestr" > "$writefile"














