#include <iostream> 

int main () {
    int a = 1;
    int b = 2;
    int storeTemporaryValue = a; // 1
    a = b; // a = 2;
    b = storeTemporaryValue; // b = 1
   
    std::cout << a; // a = b = 2
    return 0;
}