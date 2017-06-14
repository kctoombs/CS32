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
  
  std::string sampleRedditPostText = "Realized in making plans to go home for mother's day that if I did, I won't be able to make the May 9th dance show. I know convert attendance counts for 10% of the grade, and I'm willing to take that hit. How screwed would I be on the final though if I missed it? \n\n\nThanks for help!";
  
  // word count should initially be zero
  ASSERT_EQUALS(0,wc.getNumWords());

  wc.addAllWords(sampleRedditPostText);
  
  ostringstream byOccurence;
  wc.dumpWordsSortedByOccurence(byOccurence);

  std::string expectedSortedByOccurence = std::string("") +
    "I,5\n" + 			      
    "for,3\n" + 
    "the,3\n" + 
    "to,3\n" +
    "be,2\n" +
    "if,2\n" +
    "that,2\n" +
    "10,1\n" + 
    "9th,1\n" + 	     	      
    "How,1\n" + 		      
    "I'm,1\n" + 		      
    "May,1\n" + 		      
    "Realized,1\n" + 		      
    "Thanks,1\n" + 
    "able,1\n" + 
    "and,1\n" + 
    "attendance,1\n" + 
    "convert,1\n" + 
    "counts,1\n" + 
    "dance,1\n" + 
    "day,1\n" + 
    "did,1\n" + 
    "final,1\n" + 
    "go,1\n" + 
    "grade,1\n" + 
    "help,1\n" + 
    "hit,1\n" + 
    "home,1\n" + 
    "in,1\n" + 
    "it,1\n" + 
    "know,1\n" + 
    "make,1\n" + 
    "making,1\n" + 
    "missed,1\n" + 
    "mother's,1\n" + 
    "of,1\n" + 
    "on,1\n" + 
    "plans,1\n" + 
    "screwed,1\n" + 
    "show,1\n" + 
    "take,1\n" + 
    "though,1\n" + 
    "willing,1\n" + 
    "won't,1\n" + 
    "would,1\n";

  ASSERT_EQUALS(expectedSortedByOccurence,byOccurence.str());
    
  return 0;
}
