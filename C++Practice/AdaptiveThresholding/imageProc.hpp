#include<iostream>
#include<fstream>
#include<memory>

int writePGM8(std::string const&, std::shared_ptr<uint8_t> const,std::size_t, std::size_t);
std::shared_ptr<uint8_t> readAndAllocatePGM8(std::size_t &,std::size_t &,std::string const &);
