#include <iostream>

#include "RubikCube.h"

int main() {
  std::cout << "Hello, World!" << std::endl;

  using namespace RubikCubeAPI;

  RubikCube rubik_cube;

  std::cout << rubik_cube << std::endl;

  return 0;
}
