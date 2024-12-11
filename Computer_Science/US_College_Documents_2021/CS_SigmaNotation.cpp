#include <iostream>
#include <cmath>

int main()
{

    // Define sIgma notation algorithm in C++

    int Elements[] {1,2,3,4,5,6,7,8,9,10};
    int n;

    std::cout << "sigma n to k" << std::endl;
    std::cout << "type your n : " << std::endl;

    std::cin >> n;

    int Summation {};

    // i to n of (k)

    for(unsigned int i; i < n; i++)
    {
        Summation = Summation + Elements[i];
    }

    // i to n of (k^2)

    // somehow managed to make this one without book;
    for(unsigned int i; i < n; i++)
    {
        Summation = Summation + pow(Elements[i], 2);
    }

    std::cout << "The Summation of sigma is : " << Summation << std::endl;

    return 0;
}
