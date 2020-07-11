#include <string>
using namespace std;

string SubtractSum(int n)
{
  while(n > 9){
    int sum = (n/100) + ((n%100)/10) + (n%10);
    n = n-sum;
  }
  string array[] = {"kiwi", "pear","kiwi","banana","melon", "banana","melon","pineapple","apple","pineapple",
  "cucumber","pineapple","cucumber","orange","grape","orange","grape","apple","grape","cherry",
  "pear","cherry","pear","kiwi","banana","kiwi","apple","melon","banana","melon",
  "pineapple","melon","pineapple","cucumber","orange","apple","orange","grape","orange","grape",
  "cherry","pear","herry","pear","apple","pear","kiwi","banana","kiwi","banana",
  "melon","pineapple","melon","apple","cucumber","pineapple","cucumber","orange","cucumber","orange",
  "grape","cherry","apple","cherry","pear","cherry","pear","kiwi","pear","kiwi",
  "banana","apple","banana","melon","pineapple","melon","pineapple","cucumber","pineapple","cucumber",
  "apple","grape","orange","grape","cherry","grape","cherry","pear","cherry","apple",
  "kiwi","banana","kiwi","banana","melon","banana","melon","pineapple","apple","pineapple"};
  
  return array[n-1];
}


//// other solutions

#include <string>

auto DigitSum(int n) -> int
{
    // return the sum of the digits of the number n
    
    int sum = 0;
    while (n != 0) {
        sum += (n % 10);
        n /= 10;
    }
    
    return sum;
}

auto GetFruit(int n) -> std::string
{
    switch(n) {
        case 1: case 3: case 24: case 26: case 47: case 49: case 68: case 70: case 91: case 93:
            return "kiwi";
        case 2: case 21: case 42: case 44: case 46: case 65: case 67: case 69: case 88:
            return "pear";
        case 4: case 6: case 25: case 29: case 48: case 50: case 71: case 73: case 92: case 94: case 96:
            return "banana";
        case 5: case 7: case 28: case 30: case 32: case 51: case 53: case 74: case 95: case 97:
            return "melon";
        case 8: case 10: case 12: case 31: case 33: case 52: case 56: case 75: case 77: case 79: case 98: case 100:
            return "pineapple";
        case 9: case 18: case 27: case 36: case 45: case 72: case 81: case 99:
            return "apple";
        case 11: case 13: case 34: case 55: case 59: case 78: case 80:
            return "cucumber";
        case 14: case 16: case 35: case 37: case 39: case 58: case 60: case 83:
            return "orange";
        case 15: case 17: case 19: case 38: case 40: case 61: case 82: case 86:
            return "grape";
        case 20: case 22: case 41: case 43: case 62: case 64: case 66: case 85: case 87: case 89:
            return "cherry";
    }
    
    return "";
}

auto SubtractSum(int n) -> std::string
{
    std::cout << "Input: " << n << std::endl;
    
    do {
        n -= DigitSum(n);
    } while(n > 100);
    
    std::cout << n << std::endl;
    
    return GetFruit(n);
}

