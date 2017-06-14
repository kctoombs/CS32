#include <algorithm>
#include "WordCountHelper.h"
#include <sstream>


int WordCountHelper::getNumWords() const{
  
  return wordList.size();
}



int WordCountHelper::getWordCount(std::string word) const{
  for(size_t i = 0; i < wordList.size(); i++){
    if(wordList[i].getWord() == word){
      return  wordList[i].getCount();
    }
  }
  return 0;
}



int WordCountHelper::incrWordCount(std::string word){
  for(size_t i = 0; i < wordList.size(); i++){
    if(wordList[i].getWord() == word){
      return wordList[i].incr();
    }   

  }
  wordList.emplace_back(word);
  return 1;
}




void WordCountHelper::dumpWordsSortedByWord(std::ostream &out) const { 
  std::vector<count> temp(wordList);
  std::sort(temp.begin(), temp.end(), count::sortWords);
  for(size_t i = 0; i < wordList.size(); i++){
     out<< temp[i].getWord() << "," << temp[i].getCount() << std::endl;
  } 
  return;
}



void WordCountHelper::dumpWordsSortedByOccurence(std::ostream &out) const {

  std::vector<count> temp(wordList);
  std::sort(temp.begin(), temp.end(), count::sortInts);
  
  for(size_t i = 0; i < wordList.size(); i++){
    out<< temp[i].getWord() << "," << temp[i].getCount() << std::endl;
  }
  return;
}




void WordCountHelper::addAllWords(std::string text){
  std::istringstream iss(text);
  std::string word;
  stripWord(text);
  while(iss >> word) {
    incrWordCount(stripWord(word));
  }
    return;
}


bool WordCountHelper::isWordChar(char c) {
  return
    (c >=65 && c <= 90) ||   // upper case
    (c >=97 && c <= 122) ||  // lower case
    (c == 45)||
    (c == 32)||
    (c >=48 && c <= 57 );    // digits
}


std::string WordCountHelper::stripWord(std::string word){

  int i = 0;
  while(!isWordChar(word[i])){
    word.erase(0,1);
  }
  i = word.size() - 1;
  while(!isWordChar(word[i])){
    word.erase(i);
    i--;
  }

  return word;
}



