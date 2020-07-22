int makeNegative(int num)
{
  if(num>0){
    return num*(-1);
  }
  else return num;
}

///other solutions

int makeNegative(int num) {
  return num > 0 ? -num : num;
}

////

int makeNegative(int num)
{
  return -abs(num);
}
