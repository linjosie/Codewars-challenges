#include <vector>

int positive_sum (const std::vector<int> arr){
  // Your code here
  int sum=0;
  for(int i=0;i<arr.size(); i++){
    if(arr.at(i)>0) sum+=arr.at(i);
  }  

  return sum;
}


/////other solutions


#include <vector>

int positive_sum (const std::vector<int> &arr){
  int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] > 0) sum += arr[i];
    }
  return sum;
}


///////


include <vector>

int positive_sum (const std::vector<int> array)
{
    int result = 0;
    for(int number : array) 
    {
        result += number > 0 ? number : 0;
    }
    return result;
}

//////

#include <vector>

int positive_sum(const std::vector<int>& xs) {
  int sum = 0;
  for (auto x : xs)
    if (x > 0)
      sum += x;
  return sum;
}
