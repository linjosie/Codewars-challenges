#include <vector>

vector<int> quadratic(int a,int b){
// Answer in vector
  return {1,-(a+b), a*b};
}

////other solutions

#include <vector>
using namespace std;
vector<int> quadratic(int a,int b){
  return vector<int>({1, -a-b, -a*-b});
}

/////


#include <vector>
using namespace std;
vector<int> quadratic(int a,int b){
// Answer in vector
  vector<int> result;
  result.push_back(1);
  result.push_back((a + b) * -1);
  result.push_back(a * b);
  return result;
  
  
}
