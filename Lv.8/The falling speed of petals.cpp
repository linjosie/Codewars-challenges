double SakuraFall(double v) {
  int dist = 80*5;
  if (v<=0){
    return 0.0;
  }
  else return dist/v;
  
}



//// other solutions

double SakuraFall(double v) {
    return v <= 0 ? 0 : 400 / v;
}
