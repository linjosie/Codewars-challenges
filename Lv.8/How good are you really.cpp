#include <vector>
#include <numeric>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  // your code here
  int n = classPoints.size();
  float average = accumulate(classPoints.begin(), classPoints.end(),0.0)/n;
  return (average < yourPoints);
}

//////other solutions

#include <vector>
#include <numeric>

bool betterThanAverage(const std::vector<int>& classPoints, const int yourPoints) {
  return std::accumulate(classPoints.cbegin(), classPoints.cend(), 0) < classPoints.size() * yourPoints;
}


/////

nclude <vector>

bool betterThanAverage(std::vector<int> arr, int p) {
  int sum =0;
  for(auto i:arr)
    sum+=i;
  
  int avg = sum/arr.size();
  
  return p > avg ? true:false;
}


