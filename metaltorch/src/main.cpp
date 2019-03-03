#include <iostream>
#include <mathutils/add.hpp>
#include <torch/torch.h>

int main() {
  std::cout << "Hello, world. " << std::endl;
  std::cout << "3 + 4 = " << add(3, 4) << std::endl;
  return 0;
}