int summation(int num){
 //Code Here
  int sum=0;
  for(int i=1;i<num+1;i++){
    sum+=i;
  }
  return sum;
}

////other solutions

int summation(int num){
 return num*(num+1)/2;
}
