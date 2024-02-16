#include <iostream>
using namespace std;

int main() {
  int x = 10;
  int y = 20;
  cout << "x = " << x
       << endl // chaining outputs - need to put the stream insertion operator
               // "<<" before every type of insertion
       << "y = " << y;
  return 0;
}