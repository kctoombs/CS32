#include "WordCount.h"

#include <iostream>
#include <sstream>
#include "tddFuncs.h"
using namespace std;

int main() {
  cout << "Running tests from: " << __FILE__ << endl;
  
  // Tests only getNumWords, incrWordCount, and getWordCount
  
  WordCount wc;

  // Text from sample Reddit post:
  // http://www.reddit.com/r/UCSantaBarbara/comments/33eihe/how_bad_would_it_be_to_miss_a_dance_45_concert/
  
  std::string sampleText = "This test isn't a difficult 'test' is it?";

  // word count should initially be zero
  ASSERT_EQUALS(0,wc.getNumWords());

  wc.addAllWords(sampleText);
  
  ostringstream byWord;
  wc.dumpWordsSortedByWord(byWord);

  std::string expectedSortedByWord = std::string("") +
    "This,1\n" + 
    "a,1\n" + 
    "difficult,1\n" + 
    "is,1\n" + 
    "isn't,1\n" +
    "it,1\n" +
    "test,2\n" + 
    "";
  
  ASSERT_EQUALS(expectedSortedByWord,byWord.str());
  
  return 0;
}
