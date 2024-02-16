/*
Sales = 95,000
State Tax = 4%
County Tax = 2%;

Calculate:
1. Sales with state tax
2. Sales with count tax
3. Sales with all taxes
*/

#include <iostream>
using namespace std;

int main() {

  double sales = 95000;
  cout << "Sales before tax: $" << sales << endl;

  const double stateTaxRate = .04;
  double stateTaxAmount = sales * stateTaxRate;
  cout << "The state tax is $" << stateTaxAmount << "," << endl;

  const double countyTaxRate = .02;
  double countyTaxAmount = sales * countyTaxRate;
  cout << "The county tax is $" << countyTaxAmount << "," << endl;

  double totalTax = stateTaxAmount + countyTaxAmount;
  cout << "Total tax is $" << totalTax << endl;

  double salesAfterTax = sales - (stateTaxAmount + countyTaxAmount);
  cout << "The total sales after tax is $" << salesAfterTax << endl;

  return 0;
}