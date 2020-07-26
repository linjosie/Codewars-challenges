bool checkForFactor(int base, int factor) {
  return base%factor==0;
}

////other solutions

bool checkForFactor(int base, int factor) {
  return base%factor?false:true;
}

/////
bool checkForFactor(int base, int factor) {
  return !(base % factor);
}
