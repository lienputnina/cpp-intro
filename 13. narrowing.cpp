#include <iostream>
using namespace std;

int main() {
  int number = 1'000'000;
  short secondNumber = number; // will narrow down the initial number

  //   short thirdNumber = 1'000'000; // number too large for short
  //   int fourthNumber{thirdNumber};

  short thirdNumber = 100;       // good amount of number
  int fourthNumber{thirdNumber}; // storing small numbers in larger memory space
                                 // does not cause problems

  cout << secondNumber;
  return 0;
}