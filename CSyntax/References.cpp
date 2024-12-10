#include <iostream>

int main()
{
    // References;
    // Often used as saving integer as another namespace
    
    int Integer_Value {35};
    double Double_Value {25.35};
    
    int& Reference_For_Integer_Value_One {Integer_Value};
    int& Reference_For_Integer_Value_Second {Reference_For_Integer_Value_One};
    double& Reference_For_Double_Value_One {Double_Value};
    int *Integer_Pointer_Checker {nullptr};
    
    std::cout << "Reference_For_Double_Value_One : " << Reference_For_Integer_Value_One << std::endl;
    std::cout << "Reference_For_Integer_Value_Second : " << Reference_For_Integer_Value_Second << std::endl;
    std::cout << "Reference_For_Double_Value_One : " << Reference_For_Double_Value_One << std::endl;
    std::cout << "Size of Integer_Value : " << sizeof(Integer_Value) << std::endl;
    std::cout << "Size of Integer_Value Refernece : " << sizeof(Reference_For_Integer_Value_One) << std::endl;
    Integer_Pointer_Checker = &Integer_Value;
    std::cout << "Address of Integer_Value : " << Integer_Pointer_Checker << std::endl;
    Integer_Pointer_Checker = &Reference_For_Integer_Value_One;
    std::cout << "Address of Reference_For_Integer_Value_One : " << Integer_Pointer_Checker << std::endl;
    
    
    // Pointers;
    // Often used as memory management.
    int *Pointer_Integer_Value {nullptr};
    Pointer_Integer_Value = &Integer_Value;
    
    std::cout << "Pointer_Integer_Value through pointer : " << *Pointer_Integer_Value << std::endl;
    
    // Differnece between Pointers and Referneces.
    // Referneces are like Constant_Pointers. but much have friendly syntax.
    // Reference must be decleared through already exisiting Variable.
    // Pointer doesnt require to be decleared with exisiting Variable.
    int Another_Integer_Variable {64};
    
    int const *Constant_Pointer_Variable {&Another_Integer_Variable};
    int& Reference_Integer_Value {Another_Integer_Variable};
    
    // doesnt work. Constant_Pointer_Variable = &Another_Integer_Variable;
    Reference_Integer_Value = Integer_Value; // works.
    
    // Non Constant Refernece, Const Reference
    
    // Non Constant Refernece
    int Another_Integer_Variable_For_Ref {};
    int& Refernece_Integer_Value {Another_Integer_Variable_For_Ref};
    const int& Constant_Reference_Integer_Value {Another_Integer_Variable_For_Ref};
    
    Refernece_Integer_Value++;
    std::cout << "Modifying Refernece_Integer_Value : " << Refernece_Integer_Value << std::endl;
    // Compile error. Constant_Reference_Integer_Value++;
    
    return 0;
}