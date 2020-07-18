//// dont think too much
int opposite(int number) 
{
  return number*(-1);
}

/////other soultions

#include <functional>

auto opposite = std::negate<int>();

