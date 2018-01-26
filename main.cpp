#include <iostream>
#include <vector>
#include <string>


#include "buffer.hpp"

int main(int argc, char* argv[]) {
  
  std::vector <std::string> sources; 
  
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " FILENAME [FILENAME ...]" << std::endl;
    return 1; 
  } 

  for (int i=1; i < argc ; i++) {
    sources.push_back(argv[i]);
  }

  // Handle all the input files. 
  for (uint i=0; i < sources.size(); i++) {
    Buffer buffer; 
    buffer.read_buffer(sources[i]);
  }
}

