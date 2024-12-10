#include <iostream>
#include <iomanip> // allows to use setprecision.

int main() {

    // float - 4 bytes, precision 7 digits. used for such game,general programming
    // double - 8 bytes, precision 15 digits. used for mathmathics.
    // long double - 16 bytes, precision 15+ digits. used for precious simulation of physics etc.

    float Natural_Logarithm_Base_Starndard_Notation {2.718};
    double Natural_Logarithm_Base_double {2.71828182845904523536028747135266249775724709369995957}; 
    float Natural_Logarithm_Base_float {2.71828182845904523536028747135266249775724709369995957}; 


    // SCIENTIFIC NOTATION - e means multiply with 10*n. 
    // eg. if you use e2, it will mutiply 10^2, if you use e-2 it will multiply 10^-2
    float Natural_Logarithm_Base_With_Positive_e {2.718e2};
    float Natural_Logarithm_Base_With_Negative_e {2.718e-2};

    // Normal precision for std is 7.

    std::cout << Natural_Logarithm_Base_Starndard_Notation << std::endl; // 2.718
    std::cout << std::setprecision(20); // set std's digit to 20 through iomanip library.
    std::cout << Natural_Logarithm_Base_double << std::endl; // Accurately calculated : 2.718281828459045 
    std::cout << Natural_Logarithm_Base_float << std::endl; // Accurately calculated : 2.7182817

    std::cout << Natural_Logarithm_Base_With_Positive_e << " with e2" << std::endl;
    std::cout << Natural_Logarithm_Base_With_Negative_e << " with negative e-2" << std::endl;

        // Scientific Notation
    // e means multiply integer by power of 10, which means e1 = 10^1.
    // it can also be used as divide, such as e-2 will result 10^-2

    std::setprecision(16);

    double Natural_Logarithm_with_Positive_e {2.71828182849504e2}; // 271.828182849504
    double Natural_Logarithm_with_Negative_e {2.71828182849504e-2}; // 0.0271828182849504

    std::cout << Natural_Logarithm_with_Positive_e << " with Postive e2, 10^2" << std::endl;
    std::cout << Natural_Logarithm_with_Negative_e << " with negative e2, 10^-2" << std::endl;

    // Infinity and NaN

    float Natural_Logarithm {2.718};
    float Blank1 {}; // Initial to 0
    float Blank2 {}; // Initial to 0

    float infinity {Natural_Logarithm / Blank1}; // x/0 infinity
    // cannot know why does shit goes like this. normally, x/0 will mathmathically impossible. but it seems like 
    // if we send 0 to lim, it can be posistive infinity 

    float NaN_Value {Blank1 / Blank2}; // 0/0 = NaN


    std::cout << infinity << " This will print out Infinity." << std::endl;
    std::cout << NaN_Value << " This will print out NaN."<< std::endl;


    return 0;
}