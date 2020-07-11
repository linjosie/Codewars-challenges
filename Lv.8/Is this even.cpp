#include <math.h>

bool is_even(double n)
{
    // your code here
  if( fmod(n,2) == 0){
    return true;
  }
  else return false;
  
}

/////other solution

#include <cmath>

bool is_even(double n)
{
    return fmod(n, 2) == 0; 
    // the compiler will compile and see if (fmod(n, 2) == 0) is true since this the function type is boolin, will return true of valse 
}


