#include <iostream>
#include <array> // to use std::array

int main ()
{
    size_t Size_Notation {}; // integer value for null. it just for placeholder positive numb

    // LINEAR DATA STRUCTURES

    // Contiguous Data Structuers - O(1)
    // Linked Data Structuers - O(n)

    // Use CDS when Effective and Accurate Size
    // Use LDS when Additional Space is expected

    // Static Array - Will deleted when code bracket ends.
    int Cpp_Array[]{2,3,4}; // align to stack memory

    // Dynamic Array - Can set when will created and deleted
    int* Dynamic_Cpp_Array = new int[Size_Notation]; // align to heap memory

    // std::array - CDS Secure version of array
    std::array<int, 10> Array_One; // std::array<DataType, Size> Name;
    Array_One[0] = {1}; // Set Array First Space to 1
    std::cout << "Accessing First Array Space : "<<Array_One[0] << std::endl;

    std::array<int, 4> Array_Init_One = {1,2,3,4}; // Can be initialized and assign same time.

    for (auto Elements : Array_Init_One)
    {
        std::cout << Elements << std::endl; // 1,2,3,4
    }

    // at(index) - Accurate but slower than [] Operator

    try
    {
        std::cout << "Using at() : " <<Array_Init_One.at(3) << std::endl; // 4
        std::cout << "Using at() : " << Array_Init_One.at(4) << std::endl; // Fatal Error - Crash;
        std::cout << "Using [] : " << Array_Init_One[3] << std::endl; // no error
        std::cout << "Using [] : " << Array_Init_One[4] << std::endl; // no error
    }
    catch (const std::out_of_range& ErrorMessage)
    {
        std::cout << ErrorMessage.what() << std::endl;
    }


    return 0;
}