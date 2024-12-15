#include <iostream>

int main () 
{

    int Test_Array[10];

    Test_Array[0] = 1; // this suprisingly works;

    std::cout << Test_Array[0] << std::endl;

    size_t Iterator {};
    size_t Insert_Value_Iterator {};

    // Array Reader through loop statement
    for(Insert_Value_Iterator; Insert_Value_Iterator < 10; Insert_Value_Iterator++)
    {
        Test_Array[Insert_Value_Iterator] = Insert_Value_Iterator * 3;
    }

    // Array writer through loop statement
    for(Iterator; Iterator < 10; Iterator++)
    {
        std::cout << "Reading the " << Iterator << " th Space of Test_Array : " << Test_Array[Iterator] << std::endl;
    }

    const int Constant_Array[] {5,3,1}; // Cannot be modified.
    // Constant_Array[1] = 1;  COMPILE ERROR

    // Declear and initialized at same time
    int First_Array[] {1,2,3,4,5,6,7,8,9,10};

    // Range based loops
    for(auto value : First_Array) // HOW??? HOW IS THIS SIMPLE?
    {
        std::cout << value << std::endl; 
    }

    int sum {};

    // Range based summation 
    for(int Elemenets : First_Array)
    {
        sum += Elemenets;
    }
    std::cout << sum << std::endl; // holy fuck

    std::cout << "size of array : " << std::size(First_Array) << std::endl;
    // sizeof(variable) is old c++ feature, so use std::size(variable) instead. 
    // sizeof(variable) will calculate only object that occupies memory, but std::size() will calculate how many elements will occupy memory. hence more accurate.

    char Character_Array [3];
    Character_Array[1] = 'a'; // this is same as integer array;
    std::cout << Character_Array << std::endl;

    char Character_Array_String[] {"Hello World!"}; // You dont have to use Loops to read char array
    // this is very cool, because built-in std::string takes alot of memory, but character array will control its size of memory
    // ++ you can also modify them easily;
    std::cout << Character_Array_String << std::endl; // you dont have to use for loop like this
    
 
    return 0;
}