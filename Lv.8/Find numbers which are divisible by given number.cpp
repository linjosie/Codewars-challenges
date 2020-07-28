std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
  std::vector<int> re;
  int s = numbers.size();
  for(int i=0;i<s;i++){
    if(numbers[i]%divisor ==0){
      re.push_back(numbers[i]);
    }
  }
  return re;
}

/////other solutions

std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
    std::vector<int> result;
    for (int & x: numbers)
      if (x % divisor == 0)
      result.push_back(x);
    
  return result;
}


//////

std::vector<int> divisible_by(std::vector<int> nums, int d) {
    nums.erase(
        std::remove_if(nums.begin(),
                       nums.end(),
                       [d](int n){return (n%d);}),
        nums.end()
    );
    return nums;
}
