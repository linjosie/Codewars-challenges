#include <math.h>
#include <vector>
std::vector<int> digitize(unsigned long n) 
{        
  std::vector<int> vec={};
  int digit = log10(n)+1;
  for(int i=0;i<digit;i++){
    vec.push_back(n%10);
    n/=10;
  }
  return vec;
  
}

//// other solutions

std::vector<int> digitize(unsigned long n) 
{
    std::vector <int> num;
    while(n!=0){
        num.push_back(n%10);//fetch the LSB of the number
        n = n / 10;//right shift the number
    }
    return num;
}


////
std::vector<int> digitize(unsigned long long n) 
{        
  std::vector<int> digits;
  for(;n>0;digits.push_back(n%10),n/=10);
  return digits;
}
////

std::vector<int> digitize(unsigned long n) 
{        
    std::vector<int> rod;
    do {
        rod.push_back(n % 10);
    }
    while (n /= 10);
    return rod;
}
