#include <iostream>
#include <string.h>
string to_alternating_case(const string& str)
{
  int n = str.length();
  string ans;
  char char_array[n+1];
  strcpy(char_array, str.c_str());
  for (int i=0 ; i<n; i++){
    if(char_array[i]>=97 && char_array[i]<=122)
      {
        char_array[i]=char_array[i]-32;
      }
    else if(char_array[i]>=65 && char_array[i]<=92){
      char_array[i]=char_array[i]+32;
    }
    ans += char_array[i];
  }
  //cout << ans;
  return ans;
}


///other solutions

#include <iostream>
#include <cctype>

string to_alternating_case(const string& str)
{
    string ret = str;
    for (char &c : ret) {
        c = isupper(c) ? tolower(c) : toupper(c);
    }
    return ret;
}


//////

#include <iostream>

string to_alternating_case(const string& str)
{
  string str2=str;
  for(int i=0; i<str2.length(); i++)
  {
    if(str2[i]>64&&str2[i]<91)
    {
      str2[i]+=32;
    }
    else if(str2[i]>96&&str2[i]<123)
    {
      str2[i]-=32;
    }
  }
  
  return str2;
}
