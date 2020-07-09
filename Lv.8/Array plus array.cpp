#include <vector>
#include <numeric>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int arr1 = accumulate(a.begin(),a.end(),0);
  int arr2 = accumulate(b.begin(),b.end(),0);
  
  return arr1 + arr2; 
}

////other solutions

#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
    int total = 0;
    for( int i : a ) total += i;
    for( int i : b ) total += i;
    return total;
}

/////


#include <vector>
using namespace std; 

int arrayPlusArray(vector<int> a, vector<int> b) 
{
  int sum = 0 ; 
  
  // summing the First Array or Vector of numbers 
  for (int i = 0 ; i < a.size() ; i++)
  {
    sum = sum + a[i] ;
  }
  
  // Summing the second array or Vector of numbers (Integers)
  for (int j = 0 ; j< b.size() ; j++)
  {
    sum = sum + b[j] ;
  }
  return sum ;
}
