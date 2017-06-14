#include "WordCount.h"

#include <iostream>
#include "tddFuncs.h"
using namespace std;

int main() {
  cout << "Running tests from: " << __FILE__ << endl;
  
  ASSERT_EQUALS("foo",WordCount::stripWord(".foo"));
  ASSERT_EQUALS("bar",WordCount::stripWord("bar?"));
  ASSERT_EQUALS("fum",WordCount::stripWord("...fum***"));
  ASSERT_EQUALS("quote",WordCount::stripWord("\"quote\""));
  ASSERT_EQUALS("isn't",WordCount::stripWord("isn't"));
  ASSERT_EQUALS("mother-in-law",WordCount::stripWord("mother-in-law"));

  
  return 0;
}
