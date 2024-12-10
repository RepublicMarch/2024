#include <iostream>

int main(){

    char Character_A = {'A'};

    std::cout << Character_A << std::endl;

    std::cout << std::endl;

    char ASCII_Value = {65};

    std::cout << ASCII_Value << std::endl; // print "A"
    std::cout << "Transfer ASCII_Value as integer : " << static_cast<int>(ASCII_Value) << std::endl;
    // static_cast<Datatype>(VariableName) - transfer Character value to integer;

    // std::string - c_String, string variable.
    std::string Message{}; // Empty String.
    std::string Hello_World {"Hello World!"};
    std::string Welcome_Message {};
    
    // std::strlen - returns length of string
    char C_String[] {"Hello World!"};
    const char Constrant_C_String[] {"Constrant String of Hello World"};
    
    std::cout << std::strlen(C_String) << std::endl; // 12
    std::cout << std::strlen(Constrant_C_String) << std::endl; // 31
    
    // std::strcmp (comparing things)
    char *String_Data_One {"State of Moscow"};
    char *String_Data_Two {"State of Volgograd"};
    std::cout << "size of String_Data_One : " << std::strlen(String_Data_One) << std::endl;
    std::cout << "size of String_Data_Two : " << std::strlen(String_Data_Two) << std::endl;
    
    std::cout << "Compare amount of Characters; (" << String_Data_One << " : " << String_Data_Two 
    << ") : "<< std::strcmp(String_Data_One,String_Data_Two) << std::endl;
    
    String_Data_Two = "State of Moscow";
    std::cout << "Compare amount of Characters; (" << String_Data_One << " : " << String_Data_Two 
    << ") : "<< std::strcmp(String_Data_One,String_Data_Two) << std::endl;
    
    // std::strncmp
    size_t n {8};
    String_Data_Two = "State of Volgograd";
    std::cout << "Compare amount of Characters; (" << String_Data_One << " : " << String_Data_Two 
    << ") : "<< std::strncmp(String_Data_One, String_Data_Two, n) << std::endl;
    
    // std::strchr (find first ouccurence.) O(n)
    const char *C_String_New {"nononoono"};
    char Target_Character {'n'};
    const char *result = C_String_New;
    unsigned int Iteration {};
    
    // if C_String_New has Target_Character and not null ptr;
    while((result = std::strchr(result, Target_Character)) != nullptr)
    {
        if(true)
        {
          std::cout << "Have Found : " << Target_Character << ", Started at - " <<
          result << std::endl;
          
          ++result;
          ++Iteration;
        }
        else // seems like strchr does not return false value on exceptions
        {
            std::cout << "Have Not found any" << std::endl;
        }
    }
    
    std::cout << "Total Counts : " << Iteration << std::endl;
    
    // std::strrchr (find last ouccurence)
    char input[] = "/home/user/main.cpp";
    char *output = std::strrchr(input, '/');
    
    if(output)
    {
        std::cout << output << std::endl;
    }
    
    return 0;
}