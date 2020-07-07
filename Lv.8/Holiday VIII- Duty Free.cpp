#include <math.h>

int duty_free(int price, int discount, int holiday_cost) {
  double a = price * discount*0.01;
  return (int)trunc( holiday_cost / a);
}

////other solutions

int duty_free(double price, double discount, int holiday_cost) {
  return holiday_cost/(price/100*discount);
}


////////

#include <cmath>
int duty_free(int price, int discount, int holiday_cost) {
  
  return (int) floor(holiday_cost/(price*discount/100.0));
}
//////
int duty_free(int p, int d, int h) {return h/(p*d/100.0);}  
