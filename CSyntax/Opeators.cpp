#include <iostream>
#include <cmath>

int main(){

    // Addition
    int Integer_Variable_One = {10};
    int Integer_Variable_Two = {5};

    unsigned Sum_of_Integer_Variable = {Integer_Variable_One + Integer_Variable_Two}; 

    std::cout << "Addition of Integer Variable : " << Sum_of_Integer_Variable << std::endl; //15

    // Subtraction
    
    int Subtraction_of_Integer_Variable = {Integer_Variable_One - Integer_Variable_Two};

    std::cout << "Subtration of Integer Variable : "<< Subtraction_of_Integer_Variable << std::endl; // 5

    // Multiply 

    int Multiply_of_Integer_Variable = {Integer_Variable_One * Integer_Variable_Two};

    std::cout << "Multiplying of Integer Variables : " << Multiply_of_Integer_Variable << std::endl; // 50

    // Division

    int Division_of_Integer_Variables = {Integer_Variable_One / Integer_Variable_Two};

    std::cout << "Division of Integer variables : " << Division_of_Integer_Variables << std::endl; // 2

    // Modulus

    unsigned Integer_Variable_Three {3};

    int Modulus_of_Integer_Variables = { (Integer_Variable_One + Integer_Variable_Three) % Integer_Variable_Two }; // 10+3 / 5 = 2 .. 3

    std::cout << "Modulus of Integer Variables : " << Modulus_of_Integer_Variables << std::endl; // 3

    // Precedence and Associativity 
    // Kill mfs who intial variable like this.

    int a {5};
    int b {2};
    int c {4};
    int d {6};
    int e {2};
    int f {9};
    int g {62};

    int Sum_Test = {a + b * c - d/e -f + g}; // 5 + (2*4) - (6/2) - 9 + 62 = 63
    
    std::cout << Sum_Test << std::endl;

    // it is Essnetial to use () to clarify notation

    Sum_Test = {(a + b) * c - (d/e) - f + g}; // (5+2) * 4 - 3 - 9 + 62 = 78

    std::cout << Sum_Test << std::endl;

    // Prefix and Postfix ++ , -- , &&

    int Prefix_Postfix_Integer {5};

    std::cout << "Prefix ++(INCREMENTING) APPLIED. CURRENT VALUE  : " << Prefix_Postfix_Integer++ << std::endl;
    std::cout << "AFTER Prefix ++, Current Value : " << Prefix_Postfix_Integer << std::endl;

    Prefix_Postfix_Integer = 5;

    std::cout << "Prefix --(Decrementing) Applied. Current Value : " << Prefix_Postfix_Integer-- << std::endl;
    std::cout << "After Prefix --, Current Value : " << Prefix_Postfix_Integer << std::endl;

    Prefix_Postfix_Integer = 5;
    Prefix_Postfix_Integer +=5;
    std::cout << "(Post fix =+ 5) = "<< Prefix_Postfix_Integer << std::endl; // 10

    Prefix_Postfix_Integer = 5;
    Prefix_Postfix_Integer -=15;
    std::cout << "(Post fix -= 15) = " << Prefix_Postfix_Integer << std::endl; // -10

    Prefix_Postfix_Integer = 5;
    Prefix_Postfix_Integer *= 5;
    std::cout << " (Post fix *= 5) = " << Prefix_Postfix_Integer << std::endl; // 25

    Prefix_Postfix_Integer = 5;
    Prefix_Postfix_Integer /= 5;
    std::cout << " (Post fix /= 5 ) = " << Prefix_Postfix_Integer << std::endl; // 1

    Prefix_Postfix_Integer = 5;
    Prefix_Postfix_Integer %= 6;
    std::cout << " (Post fix %= 6 ) = " << Prefix_Postfix_Integer << std::endl; // 1

    return 0;

}
