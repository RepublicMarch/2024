#include <iostream>

/* Problem :
 Get Integer Variable A and B, and execute A+B logic program
 */
// Input : Will give A and B at first line (0 < A, B < 10)

int main() 
{
    unsigned short int a {};
    unsigned short int b {};

    std::cin >> a;
    std::cin >> b;

    std::cout << a+b << std::endl;

    return 0;
}