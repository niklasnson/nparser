#include "buffer.hpp"

void read_buffer(std::string filename) {
  std::ifstream file(filename);
  for (std::string word; file >> word;) {
    std::cout << word << std::endl;
  }
}

void open_buffer() {}

void set_buffer() {}