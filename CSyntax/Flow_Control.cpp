#include <iostream>

int main()
{

    unsigned const int M1911 {200};
    unsigned const int M9A1 {300};
    unsigned const int M16A4 {500};
    unsigned const int M4A1 {900};
    unsigned const int AKM {800};
    unsigned const int None {0};

    unsigned int Selected_Tool {None};

    unsigned int Money {450};
    unsigned int Bank {500};

    // IF-ELSE statement

    if(M9A1 > M1911)
    {
        std::cout << "M9A1 is more valuable than M1911" << std::endl;
    }
    else
    {
        std::cout << "M9A1 is not more valuable than M1911." << std::endl;
    }

    // Ternary Operator - If else statement
    int Parameter {};
    int Arguement_One {};
    int Arguement_Two {};
    int True_Value {};
    int False_Value {};

    Parameter = (Arguement_Two > Arguement_One) ? True_Value : False_Value;
    // Parameter_Variable = (Condition1 > Condition2) ? Return_True_Value : Return_False_Value;

    // Literally same as :
    if(Arguement_Two > Arguement_One)
    {
        Parameter = True_Value;
    }
    else
    {
        Parameter = False_Value;
    }

    // ELSE IF 
    if(Money > AKM)
    {
        std::cout << "You can afford AKM" << std::endl;
    }
    else if(Money > M4A1)
    {
        std::cout << "You can afford M4A1" << std::endl;
    }
    else
    {
        std::cout << "Cannot afford any Assault Rifles" << std::endl;
    }

    // Switch Statement
    // Can only use CONSTANT VARIABLE. 
    // Useful against only 1 condition. you cannot even compare or use additional comparing operators.
    switch(Selected_Tool) 
    {
        case AKM:
        {
            std::cout << "wow you got AKM" << std::endl;
        }
        break;

        case M4A1:
        {
            std::cout << "wow you got M4A1" << std::endl;
        }
        break;

        default :
        {
            std::cout << "wow you got nothing" << std::endl;
        }
    }

    // Conclusion
    // Use If-else statement if you have to compare stuffs and complicated operators
    // Use Switch Statement if you only have to use == operator against 1 variable;

    return 0;
}