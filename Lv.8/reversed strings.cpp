#include <string>
using namespace std ; 

string reverseString (string str )
{
  // your Code is Here ... enjoy !!!
  return string(str.rbegin(), str.rend()); 
}

///other sloutions


#include <algorithm>
#include <string>

std::string reverseString(std::string str) {
  std::reverse(str.begin(), str.end());
  return str;
}
/////

#include <string.h>
using namespace std ; 

string reverseString (string str )
{
  // your Code is Here ... enjoy !!!
  reverse(str.begin(), str.end());
  
  return str ;
}
