std::vector<int> reverseSeq(int n) {
  std::vector<int> vec;
  for(int i=n;i>0;i--){
    vec.push_back(i);
  }
  
  return vec;
}

///// other solutions

std::vector<int> reverseSeq(int n) {
  std::vector<int> v;
  while ( n ) v.push_back(n--);
  return v;
}
