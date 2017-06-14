#include "WordCount.h"

#include <iostream>
#include <sstream>
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

  ostringstream oss1;

  wc.dumpWordsSortedByOccurence(oss1);

  ASSERT_EQUALS("foo,3\n",oss1.str());
  
  ASSERT_EQUALS(1,wc.incrWordCount("bar"));
  ASSERT_EQUALS(2,wc.incrWordCount("bar"));
  ASSERT_EQUALS(2,wc.getNumWords());

  ostringstream oss2;
  wc.dumpWordsSortedByOccurence(oss2);
  ASSERT_EQUALS("foo,3\nbar,2\n",oss2.str());
  
  ASSERT_EQUALS(4,wc.incrWordCount("foo"));
  ASSERT_EQUALS(5,wc.incrWordCount("foo"));
  ASSERT_EQUALS(3,wc.incrWordCount("bar"));
  ASSERT_EQUALS(4,wc.incrWordCount("bar"));
  ASSERT_EQUALS(5,wc.incrWordCount("bar"));
  ASSERT_EQUALS(6,wc.incrWordCount("bar"));

  ostringstream oss3;
  wc.dumpWordsSortedByOccurence(oss3);
  ASSERT_EQUALS("bar,6\nfoo,5\n",oss3.str());

  return 0;
}
