#include "student.h"
#include <iostream>
#include "tddFuncs.h"
using namespace std;

int main() {
  cout << "Testing class Student..." << endl;

  Student s1(1234567,"Smith","Malory Logan");
  ASSERT_EQUALS(1234567,s1.getPerm());

  ASSERT_EQUALS("Smith",s1.getLastName());
  ASSERT_EQUALS("Malory Logan",s1.getFirstAndMiddleNames());
  ASSERT_EQUALS("Malory Logan Smith",s1.getFullName());
  ASSERT_EQUALS("[1234567,Smith,Malory Logan]",s1.toString());

  return 0;
}
