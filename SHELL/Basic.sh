#! /bin/bash

echo "First Shell Script"

FILES=$(ls ../TreeBasics)

for FILE in ${FILES[@]};
do
 echo "FILE IS ${FILE}"
done

str1="SAURABH"
str2=" DESHMUKH"
str="$str1 $str2"
echo ${str}


trap "echo Booh!" SIGINT SIGTERM
echo "it's going to run until you hit Ctrl+Z"
echo "hit Ctrl+C to be blown away!"

while true;         
do
    sleep 60       
done
