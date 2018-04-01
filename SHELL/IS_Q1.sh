#! /bin/bash


function get_directory {
InpDir=$1
Child_Dir=($(ls -d ~/${InpDir}/*))
	
if [ ${#Child_Dir[@]} == 1 ]; then
echo true
echo ${Child_Dir} | rev | cut -d '/' -f 1 | rev
else
echo false
fi

}


#Example Test

out=$(get_directory 'Documents/GIT/code4u')
echo "$out"
