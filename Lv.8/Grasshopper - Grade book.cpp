har getGrade(int a, int b, int c) {
  // your code here
  double mean = (a+b+c)/3;
  if( 90<= mean &&  mean<=100){
    return 'A';
  }
  else if(80<=mean && mean<90){
    return 'B';
  }
  else if(70<=mean  && mean<80){
    return 'C';
  }
  else if(60<=mean && mean<70){
    return 'D';
  }
  else return 'F';
      
}

///other solutions

char getGrade(int a, int b, int c) {
  int avg = (a + b + c) / 3;
  switch(avg){
  case 90 ... 100: return 'A';
  case 80 ... 89: return 'B';
  case 70 ... 79: return 'C';
  case 60 ... 69: return 'D';
  default: return 'F';
  }
}


////
char getGrade(int a, int b, int c) {
  double mean = (a+b+c)/3;
  return mean>=90 ? 'A' : mean>=80 ? 'B' : mean >= 70 ? 'C' : mean >= 60 ? 'D' : 'F'; 
}

