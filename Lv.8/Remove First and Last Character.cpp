#include <string>

using namespace std; 

string sliceString (string str )
{
  str.erase(str.begin());
  str.erase(str.size()-1);
  return str ; 
}

////other solutions

#include <string>
using namespace std; 

string sliceString (string str ){
  return str.substr(1, str.size() - 2); 
}


////

#include <string>

using namespace std; 

string sliceString (string str )
{
  return string(str.begin()+1,str.end()-1) ; 
}
