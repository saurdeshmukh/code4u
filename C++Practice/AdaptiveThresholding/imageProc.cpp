#include"imageProc.hpp"

std::shared_ptr<uint8_t> readAndAllocatePGM8(std::size_t & numberOfRows,std::size_t & numberOfColumns,std::string const & fileName)
{
        std::ifstream inputStream(fileName.c_str(),std::ios::binary);
        if(!inputStream)
        {
		std::cout<<"ERROR1"<<std::endl;
                return nullptr;
        }
        
        std::string magic;
        std::size_t imageMax;
        inputStream>>magic;

        if(magic != "P5")
        {
		std::cout<<"ERROR2"<<std::endl;
                return nullptr;
        }
        inputStream>>numberOfColumns>>numberOfRows>>imageMax;

        std::string dummy;
        std::getline(inputStream, dummy);

        if(!inputStream) 
        {
		std::cout<<"ERROR3"<<std::endl;
             	return nullptr; 
        }
        if(imageMax > 255) 
        {
		std::cout<<"ERROR4"<<std::endl;
             	return nullptr; 
        }

        std::size_t const numberOfPixels = numberOfRows * numberOfColumns;
   
	
    	std::shared_ptr<uint8_t> imageBuffer(new uint8_t[numberOfPixels],std::default_delete<uint8_t>());       
	
        inputStream.read(reinterpret_cast<char*>(imageBuffer.get()), numberOfPixels);
         
        if(!inputStream) 
        {
		std::cout<<"ERROR5"<<std::endl;
            	return nullptr; 
        }
         
        inputStream.close();
        return imageBuffer;

}

int writePGM8(std::string const& fileName, std::shared_ptr<uint8_t> const imageBuffer,std::size_t numberOfRows, std::size_t numberOfColumns)
{
	std::ofstream outputStream(fileName.c_str(), std::ios::binary);
	if(!outputStream)
	{
		return -1;
	}
	outputStream<<"P5\n"<<numberOfColumns<<" "<<numberOfRows<<"\n"<<"255\n";
	
	if(!outputStream) 
	{
    		return -2;
	}
	std::size_t const numberOfPixels = numberOfRows * numberOfColumns;
	
	//Storing into raw_pointer and itering using raw_pointer to write the output.pgm file

	char * sptr=reinterpret_cast<char*>(imageBuffer.get());
	for(int i=0;i<(int)numberOfRows;i=i+1)
	{
		outputStream.write(sptr, numberOfColumns);
		sptr+=numberOfColumns;
	}
	
	if(!outputStream) 
	{
    		return -3;
	}

	outputStream.close();
	return 0;
}
