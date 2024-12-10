#include <iostream>
#include <cmath>

int Addition(int a, int b);
int Multiplier(int a, int b);
int Power_Root(int x, int n);
void Diffrential (int *x, int *n);
// void Defined_Integral (int *x, int *n, int *a, int *b);
void Indefiend_Integral(int& x, int& n);

int main()
{
    int Integer_Variable {4};
    int Integer_Variable_Two {3};
   // Addition(25, 10);
   // Multiplier(10, 10);
   // Power_Root(2, 5);
    Diffrential(&Integer_Variable, &Integer_Variable_Two);
    // Defined_Integral(&Integer_Variable, &Integer_Variable_Two, &dx, &dy);
    Indefiend_Integral(Integer_Variable, Integer_Variable_Two);
    
    return 0;
}

int Addition(int a, int b)
{
    std::cout << 
    "-----------------------------------------------------\n" <<
    "Addition of " << a << " and " << b << " = " <<  a + b  <<
    std::endl; 
    return 0;
}

int Multiplier(int a, int b)
{
    std::cout << 
    "-----------------------------------------------------\n" <<
    "Multiplier of " << a << " and " << b << " = " << a * b <<
    std::endl;

    return 0;
}

int Power_Root(int x, int n)
{
    std::cout << 
    "-----------------------------------------------------\n" <<
    x << "^" << n << " = " << pow(x, n) << 
    std::endl;
    return 0;
}

void Diffrential(int *x, int *n) // nx^n-1
{
    std::cout <<
    "-----------------------------------------------------\n" <<
    "f(x) = " << *x << "^" << *n << ", dx/dy f(x) > f'(x) = " << 
    *n << " * " << *x << "^" << *n-1 << " = " << pow(((*n) * (*x)) , (*n-1)) <<
    std::endl; 
    
}

/*(1/ n+1) * x ^ (n+1) = F(x)
Integral a to b F(x) = (F(a) - F(b)) */
/*
void Defined_Integral(int *x, int *n, int *a, int *b) 
{
    std::cout << "f(x) = " << *x << "^" << *n << ", integral f(x) from " << *a << " to "
    << *b << " = Integral " << *a << " to " << *b << " F(x) = "
    << std::endl;
}
*/

// (1/ n+1) * x ^ (N+1) = F(X) + c
// Indefined Integral
void Indefiend_Integral(int& x, int& n)
{
    std::cout << 
    "-----------------------------------------------------\n" <<
    "Integral f(x) = " << x << "^" << n << "\n" << 
    "F(x) = " << "1/" << n+1 << " * " << x << "^" << n+1 << " + c.\n" <<
    "-----------------------------------------------------" << 
    std::endl;
}