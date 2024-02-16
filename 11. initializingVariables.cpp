#include <iostream>
using namespace std;

int main() {

  double price = 99.99;

  // need to add the f/F, so it wouldn't be treated as a double by the compiler
  // and cause data loss.
  float interestRate = 3.67F;
  long fileSize = 90000L;
  char letter =
      'a'; // single quotes represent a single character/ character as such;
  bool isValid = false;

  // You can also add auto to all, so that the compiler infers the types

  /* Brace initialization
    int number =
        1.2; // conversion from double to int, decimal part will be removed
    int number = {1.2}; // will not be compiled
  int number = {}; // will be initialized to 0;
  cout << number; */
  return 0;
}