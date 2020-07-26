#include <vector>
#include <math.h>

int square_sum(const std::vector<int>& numbers)
{
  int sum = 0;
  //int n = sizeof(numbers)/sizeof(numbers[0]); cant use in vector
  for(int i=0;i<numbers.size();i++){
    sum+=pow(numbers[i],2);
  }
  return sum;
}

//////other solutions

#include <vector>
int square_sum(const std::vector<int>& numbers)
{
    int ret=0;
    for (auto x:numbers) ret+=(x*x);
    return ret;
}

///////

#include <numeric>
#include <vector>

int square_sum(const std::vector<int>& numbers)
{
    return std::accumulate(numbers.begin(), numbers.end(), 0, [](int a, int b) {return a + b * b;});
}


