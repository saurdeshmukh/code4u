#include<iostream>
#include"imageProc.hpp"

int main()
{
	std::string imageName="sample2.pgm";
	std::size_t numColumns;
	std::size_t numRows;
	std::shared_ptr<uint8_t> ptr=readAndAllocatePGM8(numRows,numColumns,imageName);
	if(!writePGM8("SampleOut1.pgm",ptr,numRows,numColumns))
		std::cout<<"File Written<<std::endl";		
	return 0;
}
