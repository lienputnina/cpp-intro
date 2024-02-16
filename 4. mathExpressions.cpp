#include <iostream> 

int main () {
    /* 
    int x = 10;
    int y = 3;
    int z = x + y; // x and y => operands
    int z = x / y; // result will be an integer, if both operands are integers
    */ 

    /* if I want a decimal/floating point number, one or both of the numbers should be "double"
    double x = 10;
    int y = 3;
    double z = x / y; */
    
 
    // x = x + 5; // etc. => expression evaluated and result is stored in x
    // x++; => increment operator, increments by 1
    int x = 10;
    // int y = x++; // first x will be assigned to y and only then incremented. x = 11, y = 10
    int z = ++x; // firs x will be incremented and then assigned to z. x = 11, z = 11;

    std:: cout << x;
    return 0;
}