int past(int h, int m, int s) {
  // your code here
  if( 0<=h<=23 && 0<=m<=59 && 0<=s<=59){
    return 1000*(h*60*60 + m*60 + s); 
  }
}

//// other solutions
#include <chrono>

int past(int h, int m, int s) {
  std::chrono::milliseconds millis{0};
  millis += std::chrono::hours{h};
  millis += std::chrono::minutes{m};
  millis += std::chrono::seconds{s};
  return millis.count();
}

//////
#include <iostream>
using namespace std;

int past(int h, int m, int s) {

  if(h>=0 && h <=23 && m>=0 && m<=60 && s>=0 && s<=60 )
  {
    h *=3600000; 
    m *=60000; 
    s *= 1000;
  }
  else
    cout << "You wrong to put number" <<endl;
  
  return h+m+s;
}
