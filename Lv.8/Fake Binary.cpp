#include <string>
std::string fakeBin(std::string str){
  //your code here
	for(int i=0; i<str.length(); i++){
		if(str[i]<53){  
    //str[i] represent an ascii code number, so "the number 5" in ascii code is 53;
			str[i] = '0';
		}
		else {
			str[i] = '1';
		}
	}
  return str;
}


/////other sloutions

#include <string>

std::string fakeBin(std::string str){
  for (int i = 0; i < str.length(); i++)
  {
    str[i] = ((str[i] - '0') > 4) ? '1' : '0';
  }
  return str;
}


//////
#include <string>

std::string fakeBin(std::string str){
  for (auto && c: str)
    c = c < '5'? '0': '1';
  return str;
}

