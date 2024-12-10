#include <iostream>
#include <cmath>

int main() {

    float Positive_Float_Variable {200.6};
    float Negative_FLoat_Variable {-125.2};

    // floor 
    std::cout << "floor on 200.6 : " << std::floor(Positive_Float_Variable) << std::endl;

    // ceil
    std::cout << "ceil on 200.6 : " << std::ceil(Positive_Float_Variable) << std::endl;

    // abs - absoulute value
    std::cout << "abs - absolutevalue on -125.2 : "  << std::abs(Negative_FLoat_Variable) << std::endl;
    std::cout << "abs - absolutevalue on 200.6 :  " << std::abs(Positive_Float_Variable) << std::endl;

    // Lets say x is function(x). and n is the base.
    // eg. n^x = pow(n, x)
    // expotential - base is Natural logarithm - e.
    // e^x = ?
    // Variable = x. exp(x)
    long double Natural_Logarithm {2.718281828904};
    std::cout << "Natural Logarithm, e : " << Natural_Logarithm << std::endl;
    std::cout << "with  which means 7^e : " << std::exp(7) << std::endl;

    // pow - base is x1, power is x2.
    // x1^x2 = ?
    // Variable = x1, x2. pow(x1, x2)
    std::cout << "2 ^ 5 : " << pow(2, 5) << std::endl; // 32
    std::cout << "Natutral Logarithm, e^10 : " << pow(Natural_Logarithm, 10) << std::endl;

    // Logarithm, base on Natural logarithm - e.
    // e^n = x?
    // Variable = x. log(x)
    std::cout << "logarithm - Let f(x) > e^n = x. whats the n? : " << std::log(5) << std::endl;

    // Common logarithm - log10(x). 
    // log10(1000) = 3
    // Variable = x. log10(x)
    std::cout << "Common logarithm - log10(10000) = " << std::log10(10000) << std::endl;

    // Comparing with Logarithm and expotential on base of e.
    std::cout << "e^5 = " << exp(5) << std::endl; // 148.413
    std::cout << "e^n = x, n = " << log(148.413) << std::endl; // 5

    // SQrt or root.
    // sqrt(81) = 9
    // Variable = x. sqrt(x)
    std::cout << "The square root of 64 : " << std::sqrt(64) << std::endl;

    // round
    // 2.6 is closer to 3, 2.4 is closer to 2.
    std::cout << "2.6 is rounded to : " << std::round(2.6) << std::endl;
    std::cout << "2.4 is rounded to : " << std::round(2.4) << std::endl;

    short int Short_Integer_One {10}; // 2 bytes 2^15
    short int Short_Integer_Two {20}; 

    // Declearing integer with char is possbile with 1 bytes, but
    // it wont calculate or any behaviour to do with numbers.
    char char_variable_with_integer_value_one {65}; // 1 bytes.
    char char_variable_with_integer_value_two {120};

    std::cout << "size of Short_Integer_One : " << sizeof(Short_Integer_One) << std::endl;
    std::cout << "size of char_variable_with_integer_value_one : " << sizeof(char_variable_with_integer_value_one) << std::endl;

    int result_integer_sum = {Short_Integer_One + Short_Integer_Two}; // works
    // you cannot declear summation with char, so use int if you want to it to work.
    int result_char_sum = {char_variable_with_integer_value_one + char_variable_with_integer_value_two};
    // char result_char_sum = {char_variable_with_integer_value_one + char_variable_with_integer_value_two}; // compile error
    std::cout << "Char variable summation - 65+120 = " << result_char_sum << std::endl;
    std::cout << "Integer variable summation - 10+20 = " << result_integer_sum << std::endl;


    return 0;
}