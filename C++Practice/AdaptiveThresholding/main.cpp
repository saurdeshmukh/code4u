#include<iostream>
#include"imageProc.hpp"

int main()
{
	std::string imageName="sample2.pgm";
	std::size_t numColumns;
	std::size_t numRows;
	std::shared_ptr<uint8_t> ptr=readAndAllocatePGM8(numRows,numColumns,imageName);
	for(int i=0;i<(numColumns*numRows);i++)
	{
		if((int)ptr.get()[i]>128)
			ptr.get()[i]-=40;
		else
			ptr.get()[i]+=60;
	}
	if(!writePGM8("SampleOut1.pgm",ptr,numRows,numColumns))
		std::cout<<"File Written"<<std::endl;		
	return 0;
}
