#include <iostream>
#include <algorithm>
using namespace std;

unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
    // Your Code is Here .. Enjoy !!
  int sum[6]={};
  sum[0] = a*b*c;
  sum[1] = (a+b)*c;
  sum[2] = a*(b+c);
  sum[3] = a+b+c;
  sum[4] = a+b*c;
  sum[5] = a*b+c;
  int SIZE = sizeof(sum)/sizeof(sum[0]);
  sort(sum,sum+SIZE);
  return sum[5];

}


//// other solutions
/*
unsigned short expressionsMatter(unsigned short a, unsigned short b, unsigned short c) {
  return std::max({a + b + c, a * (b + c), (a + b) * c, a * b * c});
}*/
