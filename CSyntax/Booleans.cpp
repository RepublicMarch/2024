#include <iostream>

int main(){

    // Boolean takes 1 byte(which is 8bits), Datatype of true or false.
    // This is expectable, as memory card is formed with only 0 and 1 s.

    bool True_value {true};
    bool False_value {false};

    std::cout << "True_Value boolean takes " << sizeof(True_value) << " Bytes. "<< std::endl; 

    // First If else statement structure
    // used some blank spacecs between if and else structer, for high readability.
    // Readability is top 1 for code structers, except python.

    if(True_value == true)
    {
        std::cout << "This is true" << std::endl;
    }
    else
    {
        std::cout << "This is not true" << std::endl;
    }

    // Printing Boolean will result 0 or 1 following false/true 

    std::cout << True_value << " If Boolean = true" << std::endl; // 1
    std::cout << False_value << " If Boolean = false" << std::endl; // 0

    // Use boolalpha function from std to preciously print Boolean value

    std::boolalpha;
    std::cout << "True_Value Boolean is : " << True_value << " , after calling boolalpha function" << std::endl;



    return 0;
}
