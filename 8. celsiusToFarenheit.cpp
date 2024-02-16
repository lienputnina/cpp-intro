#include <iostream>
using namespace std;

int main() {

  cout << "Temperature in Fahrenheit: ";
  int temperatureInFahrenheit;
  cin >> temperatureInFahrenheit;

  double temperatureInCelsius = (temperatureInFahrenheit - 32) / 1.8;
  cout << "Temperature in Celsius is " << temperatureInCelsius;

  return 0;
}