#include <iostream>

int main()
{
    // Intialize pointer;
    int *Pointer_Value_One {}; // automatically intiazlie as nullptr.
    int *Pointer_Value_Two {nullptr};
    float *Pointer_Value_Double_One {};
    
    // Assign Pointers
    // Operators of Pointer (*) to declear pointer/call address value
    // (&) to assign pointer value
    std::cout << "Before assign a value into pointer value" << std::endl;
    std::cout << "Address of Pointer_Value_One : " << Pointer_Value_One << std::endl;
    
    int Integer_Value_One {30};
    std::cout << "Integer_Value_one : " << Integer_Value_One << std::endl;
    std::cout << "After Assign integer Variable " << std::endl;
    Pointer_Value_One = {&Integer_Value_One};
    std::cout << "Address of Pointer_Value_One : " << Pointer_Value_One << std::endl;
    std::cout << "Value of Integer Value in pointer variable : " << *Pointer_Value_One << std::endl;


    // Size of Pointer Variable
    // All of pointer value occupys 8 bytes no matter what type of data
    float Float_Variable_One {};
    std::cout << "Size of Integer Variable : " << sizeof(Integer_Value_One) << std::endl;
    std::cout << "Size of Integer Variable Pointer : " << sizeof(Pointer_Value_One) << std::endl;
    std::cout << "Size of Float Variable : " << sizeof(Float_Variable_One) << std::endl;
    std::cout << "Size of Float pointer variable : " << sizeof(Pointer_Value_Double_One) << std::endl;
    
    // Character Pointer Variables
    char *Pointer_Value_Character {};
    char Character_Variable {'A'};
    char *Pointer_String_Variable {"Hello!"}; // can initialize as string
    
    Pointer_Value_Character = &Character_Variable;
    
    // Printing Char array/string/character 
    // Printing Pointer of Array will print only one first character 
    
    std::cout << "Character_Variable : " << *Pointer_Value_Character << std::endl;
    std::cout << "Address of Character_Variale : " << Pointer_Value_Character << std::endl;
    std::cout << "Pointer_String_Variable : " << Pointer_String_Variable << std::endl;
    std::cout << "Address of Pointer_String_Variable : " << *Pointer_String_Variable << std::endl;
    
    // Modify array string;
    // you cannot modify Array of string as intialized with pointer. (*)
    // *char String_Message_Array[] {"String Hello!"}; << cannot modify!
    char String_Message_Array[] {"String Hello!"};
    String_Message_Array[0] = 'H';
    std::cout << "String_Message_Array : " << String_Message_Array << std::endl;
    
    // Memory Mapping Programming
    // Allocate Dynamic memory - "new" statment.
    int *Pointer_Variable_One {new int}; // locates new address. althought it is empty.
    *Pointer_Variable_One = 0;
    int *Pointer_Variable_Test{}; // this doesnt have pointer address.
    std::cout << "Address of Pointer_Variable_One : " << Pointer_Variable_One << std::endl;
    std::cout << "Address of Pointer_Variable_Test : " << Pointer_Variable_Test << std::endl;
    std::cout << "Value of Pointer_Variable_One : " << *Pointer_Variable_One << std::endl;
    
    // COMPILE ERROR 134; std::cout << "Value of Pointer_Variable_Test : " << *Pointer_Variable_Test << std::endl;
    
    // Release memory
    int Integer_Value_One_Test {55};
    Pointer_Variable_One = &Integer_Value_One_Test; // compile error 134; ?
    std::cout << "Allocate Value to Pointer_Variable_One" << std::endl;
    std::cout << "Value of Pointer_Variable_One : " << Pointer_Variable_One << std::endl;
    std::cout << "Address of Pointer_Variable_One : " << *Pointer_Variable_One << std::endl;
    
    std::cout << "Memory releaes on Pointer_Variable_One" << std::endl;
    delete Pointer_Variable_One;
    std::cout << "Value of Pointer_Variable_One : " << Pointer_Variable_One << std::endl;
    std::cout << "Address of Pointer_Variable_One : " << *Pointer_Variable_One << std::endl;
    
    //int *Pointer_Integer_With_New_Int {new int{24}};
    //int *Poiner_Integer_Without_New_Int {nullptr};
    
    
    return 0;
}

