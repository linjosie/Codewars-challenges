#include <string>
#include <vector>

std::vector<int> solve(std::string s){
    //..
  int a =0, b=0,c=0, d = 0;
  int n=s.length();
  
  for(int i=0;i<n;i++){
    if( s[i]<=90 && s[i]>=65){
    	a++;
    }
    else if(s[i]<=122 && s[i]>=97){
    	b++;
    }
    else if (s[i]<=57 && s[i]>=48){
    	c++;
    }
    else d++;
  }
  std::vector<int> vec;
  vec.push_back(a);
  vec.push_back(b);
  vec.push_back(c);
  vec.push_back(d);
  
  return vec;
}

////other solutions

std::vector<int> solve(std::string s){
    std::vector <int> v = {0,0,0,0};
    for(char& ch : s) {
        if (isupper(ch)) v[0]++;
        else if (islower(ch)) v[1]++;
        else if (isdigit(ch)) v[2]++;
        else v[3]++;
    }
    return v;
}


std::vector<int> solve(std::string s)
{
    std::vector<int> v = { 0, 0, 0, 0 };
    for (const char c : s)
    {
        if (c >= 'A' && c <= 'Z')
        {
            v[0]++;
        }
        else if (c >= 'a' && c <= 'z')
        {
            v[1]++;
        }
        else if (c >= '0' && c <= '9')
        {
            v[2]++;
        }
        else
        {
            v[3]++;
        }
    }
    return v;
}
