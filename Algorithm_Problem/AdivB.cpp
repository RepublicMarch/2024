#include <iostream>
#include <iomanip>

/* Problem :
 Get Integer Variable A and B, and execute A/B logic program
 */
// Input : Will give A and B at first line (0 < A, B < 10)

int main() 
{
    double a {};
    double b {};

    std::cin >> a;
    std::cin >> b;

    std::cout.precision(10); // cout.precision() is based on scientific notation.
    // this code is also same as;
    // std::cout << std::fixed << std::setprecious(10) << a/b << std::endl;
    std::cout << a/b << std::endl;

    return 0;
}