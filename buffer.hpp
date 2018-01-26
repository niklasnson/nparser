#ifndef NPARSER_BUFFER_HPP_
#define NPARSER_BUFFER_HPP_

#include <string>
#include <iostream>
#include <fstream>

class Buffer {
  public: 
    Buffer(){}
    void read_buffer(std::string);
    void open_buffer();
    void set_buffer();
  private: 
};

#endif