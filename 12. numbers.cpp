#include <iostream>
using namespace std;

int main() {
  int number = 0b11111111; // 255 in binary/ hexadecimal system
  unsigned int number2 =
      -255; // unsigned - cannot accept negative numbers.
            // Avoid this, cuz it can cause hard-to-spot problems

  cout << number2;
  return 0;
}