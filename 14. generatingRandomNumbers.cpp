#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  /*
  long secondsElapsed =
       number of seconds elapsed since Jan 1970
       time(nullptr); // time of 0/ nullpointer returns current time in elapsed
                      // seoncds
   not really random. Get the same number every time
   srand(secondsElapsed);
  */

  srand(time(0));
  // not really random. Get the same number every time
  int number = rand() % 10; // setting a limit
  cout << number;
  //   cout << secondsElapsed;

  return 0;
}