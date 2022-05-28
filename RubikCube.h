#ifndef RUBIK_CUBE_RUBIK_CUBE_H_
#define RUBIK_CUBE_RUBIK_CUBE_H_

#include <ostream>

namespace RubikCubeAPI
{
  class RubikCube
  {
    
  };

  std::ostream& operator << (std::ostream& stream, 
                             const RubikCube& rubik_cube);

} // namespace RubikCubeAPI

#endif // RUBIK_CUBE_RUBIK_CUBE_H_
