#include "WordCount.h"

#include <iostream>
#include "tddFuncs.h"
using namespace std;

int main() {
  cout << "Running tests from: " << __FILE__ << endl;
  
  // Tests only getNumWords, incrWordCount, and getWordCount
  
  WordCount wc;

  // word count should initially be zero
  ASSERT_EQUALS(0,wc.getNumWords());
  
  ASSERT_EQUALS(1,wc.incrWordCount("foo"));
  ASSERT_EQUALS(2,wc.incrWordCount("foo"));
  ASSERT_EQUALS(3,wc.incrWordCount("foo"));
  ASSERT_EQUALS(3,wc.getWordCount("foo"));
  ASSERT_EQUALS(1,wc.getNumWords());

  
  ASSERT_EQUALS(1,wc.incrWordCount("bar"));
  ASSERT_EQUALS(2,wc.incrWordCount("bar"));
  ASSERT_EQUALS(3,wc.incrWordCount("bar"));
  ASSERT_EQUALS(3,wc.getWordCount("bar"));
  ASSERT_EQUALS(2,wc.getNumWords());

  
  ASSERT_EQUALS(4,wc.incrWordCount("foo"));
  ASSERT_EQUALS(5,wc.incrWordCount("foo"));
  
  ASSERT_EQUALS(4,wc.incrWordCount("bar"));
  ASSERT_EQUALS(5,wc.incrWordCount("bar"));

  ASSERT_EQUALS(2,wc.getNumWords());
  ASSERT_EQUALS(1,wc.incrWordCount("fiddle"));
  ASSERT_EQUALS(3,wc.getNumWords());

  ASSERT_EQUALS(0,wc.getWordCount("fum"));
  ASSERT_EQUALS(0,wc.getWordCount("foobar"));
  
  return 0;
}
