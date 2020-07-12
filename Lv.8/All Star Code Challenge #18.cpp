#include <string>

unsigned int strCount(std::string word, char letter){
  int count = 0;
  for(int i =0; i < word.length(); i++){
    if(word[i] == letter){
      count++;
    }
  }
  return count;
}

////other solutions

#include <string>

unsigned int strCount(std::string word, char letter){
  return count(word.begin(), word.end(), letter);
}

//////

#include <string>

unsigned int strCount(std::string word, char letter){
  unsigned int occ = 0;
  for ( char &x: word) { if (x == letter) occ++; };
  return occ;
}
