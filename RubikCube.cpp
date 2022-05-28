#include "RubikCube.h"

namespace RubikCubeAPI
{
  std::ostream& operator << (std::ostream& stream, 
                             const RubikCube& rubik_cube)
  {
   
    (void)rubik_cube; 
    static constexpr const char* S = "          ";
    //const auto& C = rubik_cube;
    return stream << S << "   |";// << C.up(0,0)
  }


} // namespace RubikCubeAPI
