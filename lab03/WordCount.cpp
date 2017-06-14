#include "WordCount.h"

int WordCount::getNumWords() const {
  // returns number of words in vocabulary
  return this->wch.getNumWords();
}
  
int WordCount::incrWordCount(std::string word) {
  // if word not in vocabulary, add it.
  // then increment occurence count for that word and return the count

  return this->wch.incrWordCount(word);

}

int WordCount::getWordCount(std::string word) const {
  // if word does not exist in vocabulary, return 0
  // otherwise return count of that word

  return this->wch.getWordCount(word); 
}
  
void WordCount::dumpWordsSortedByWord(std::ostream &out) const {
  // dump each word,count pair as CSV to ostream, sorted by word
   return  wch.dumpWordsSortedByWord(out);
 }
  
void WordCount::dumpWordsSortedByOccurence(std::ostream &out) const { 
  // dump each word,count as CSV to ostream, sorted decreasing by occurence
  // dump each word,count pair as CSV to ostream, sorted by word
  return wch.dumpWordsSortedByOccurence(out); // @@@ stub that does nothing
  }

void WordCount::addAllWords(std::string text) {
  // Parse out text into individual words, and add each word
  // You should throw away punctuation EXCEPT for ' and - that occur in the
  // middle of words, e.g. don't, isn't, O'Brien, mother-in-law, should
  // all be treated as single words with the ' and/or - as part of the word.

  this->wch.addAllWords(text);
  
  return; 

}

bool WordCount::isWordChar(char c) {
  return
    (c >=65 && c <= 90) ||   // upper case
    (c >=97 && c <= 122) ||  // lower case
    (c == 45)||
    (c >=48 && c <= 57 );    // digits
}

std::string WordCount::stripWord(std::string word) { 

  // return the word with any "non-word characters" from start and end removed


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
