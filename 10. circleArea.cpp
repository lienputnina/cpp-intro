#include <cmath>
#include <iostream>
using namespace std;

int main() {

  int circleRadius;
  const double pi = 3.14;

  cout << "Enter the radius of the circle in cm: ";
  cin >> circleRadius;

  double circleArea = pi * pow(circleRadius, 2);

  cout << "The area of the circle is  " << circleArea;

  return 0;
}