#include <iostream>
#include <cstring>

// Templates are used for creating Unspecified data type function;
// do not use pointers on templates;

// Templates
template <typename t>
t add(t a, t b)
{
    return a + b;
}

template <typename t>
t maximum(t a, t b)
{
    return (a > b) ? a : b;
}

/* Template specialization
Why use Template Specialization? Because
you can do special operation on certain data types, such as if its a 
boolean then, you can operate boolean operations.

in short, you can do different operation on certain parameter.
*/
template <>
const char* maximum<const char*> (const char* a, const char* b);
// specialized on const char pointer.

// Functions
int addition(int a, int b) // << difference : fixed param
{
    return a + b;
}

// Main Function
int main()
{

    int First_Integer_Value {10};
    int Second_Integer_Value {20};
    double First_Double_Value {10.5};
    double Second_Double_Value {40.2};
    std::string H_Wolrd {"Hello Wolrd!"};
    std::string B_World {"Bye World!"};


    // func
    int Function_Addition_Result = addition(First_Integer_Value, Second_Integer_Value);
    std::cout << Function_Addition_Result << std::endl;
    Function_Addition_Result = addition(First_Double_Value, Second_Double_Value);
    std::cout << Function_Addition_Result << std::endl;

    // COMPILE ERROR! | Function_Addition_Result = addition<double>(First_Double_Value,Second_Double_Value); 
    // COMPILE ERROR! | std::cout << addition<double>(First_Double_Value, Second_Double_Value);

    // templ
    int Template_Addition_Result = add(First_Integer_Value, Second_Integer_Value);
    std::cout << Template_Addition_Result << std::endl;
    Template_Addition_Result = add(First_Double_Value, Second_Double_Value);
    std::cout << Template_Addition_Result << std::endl;

    Template_Addition_Result = add<double>(First_Double_Value, Second_Double_Value);
    std::cout << Template_Addition_Result << std::endl; // works. prints out as integer;
    std::cout << add<double>(First_Double_Value, Second_Double_Value) << std::endl; //  works. prints out with double value
    std::string Max_String {maximum(H_Wolrd, B_World)};
    std::cout << Max_String << std::endl; // H_World!
    // COMPILE ERROR! | std::cout << add(H_Wolrd, First_Integer_Value) << std::endl; cannot convert strings to integer;
    // same as double 

    
    return 0;
}  