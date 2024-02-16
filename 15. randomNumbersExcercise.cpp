#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {

  // Rolling dice = each roll gives number between 1 - 6;

  const short minValue = 1;
  const short maxValue = 6;
  srand(time(0));

  int firstRoll = (rand() % (maxValue - minValue + 1)) + minValue;
  int secondRoll = (rand() % (maxValue - minValue + 1)) + minValue;

  cout << firstRoll << ", " << secondRoll;

  return 0;
}