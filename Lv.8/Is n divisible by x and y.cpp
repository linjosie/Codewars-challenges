
bool isDivisible(int n, int x, int y) {
  // your code here
  if(n%x==0 && n%y ==0) return true;
  else return false;
}



/////other solution


bool isDivisible(int n, int x, int y) {
  return n % x == 0 && n % y == 0;
}
