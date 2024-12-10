#include <iostream>

int main (){

    unsigned int Integer_Variable_One {10};
    unsigned int Integer_Variable_Two {20};

    // Comparing Operators
    // VAL 1 < VAL 2 - is VAL2 bigger than VAL1?
    // VAL 1 <= VAL 2 - is Val2 bigger than VAL1 or is it same?
    // VAL 1 > VAL 2 - is Val1 bigger than Val2?
    // VAL 2 => VAL 1 - is Val2 bigger than val 1 or is it same?
    // VAL 2 == VAL 1 - is VAL2 same as VAL1?
    // VAL 1 != VAL 2 - is VAL1 different with comparing VAL2? (is VAL1 NOT a VAL2?)

    std::cout << "\nComparing Operators" << std::endl;
    std::cout << "----------------------------------------------------------" << std::endl;
    std::cout << Integer_Variable_One << " < " << Integer_Variable_Two << " Is the following statement true or false ? : "<<  (Integer_Variable_One < Integer_Variable_Two) << std::endl; // true
    std::cout << Integer_Variable_One << " <= " << Integer_Variable_Two << " Is the following statement true or false ? : " << (Integer_Variable_One <= Integer_Variable_Two) << std::endl; // true
    std::cout << Integer_Variable_One << " > " << Integer_Variable_Two << " Is the following statement true or false ? : " << (Integer_Variable_One > Integer_Variable_Two) << std::endl; // false
    std::cout << Integer_Variable_One << " >= " << Integer_Variable_Two << " Is the following statement true or false ? : " << (Integer_Variable_One >= Integer_Variable_Two) << std::endl; // false
    std::cout << Integer_Variable_One << " == " << Integer_Variable_Two << " Is the following statement true or false ? : " << (Integer_Variable_One == Integer_Variable_Two) << std::endl; // false
    std::cout << Integer_Variable_One << " != " << Integer_Variable_Two << " Is the following statement true or false ? : " << (Integer_Variable_One != Integer_Variable_Two) << std::endl; // true
    std::cout << "----------------------------------------------------------" << std::endl;
    std::cout << "Logical Operators" << std::endl;
    std::cout << "----------------------------------------------------------" << std::endl;
    
    // Logical Operators

    bool True_Bool_Value {true};
    bool False_Bool_Value {false};
    bool True_Bool_Value_Second {true};

    std::cout << std::boolalpha;

    // AND OPERATOR
    // Evaluates false if any statement includes false variable.

    std::cout << " True && False : " << (True_Bool_Value && False_Bool_Value) << std::endl;
    std::cout << " True && false && True : " << (True_Bool_Value && False_Bool_Value && True_Bool_Value_Second) << std::endl;
    std::cout << " True && True : " << (True_Bool_Value && True_Bool_Value_Second) << std::endl;

    // OR OPERATOR
    // Evaluates true if any statement includes true variable

    std::cout << " True || True :  " << (True_Bool_Value || True_Bool_Value_Second ) << std::endl; //true 
    std::cout << " True || false : " << (True_Bool_Value || False_Bool_Value ) << std::endl; // true

    // NOT OPERATOR
    
    std::cout << " !True : " << !True_Bool_Value  << std::endl; // not true
    std::cout << " !False : " << !False_Bool_Value << std::endl; // not false

    std::cout << "----------------------------------------------------------" << std::endl;
    std::cout << "Combine Logical Operators and Comparing Operators" << std::endl;
    std::cout << "----------------------------------------------------------" << std::endl;

    // Logical Operator and Combine Operators

    Integer_Variable_One = 10;
    Integer_Variable_Two = 20;
    unsigned Integer_Variable_Three {30};

    std::cout << "10 < 20 and 20 < 30? : " << ((Integer_Variable_One < Integer_Variable_Two) && (Integer_Variable_Two < Integer_Variable_Three)) << std::endl; // true
    // since Logical operator is top prioritiy than Comparing Operators, we have to put () inside of Comparing Statements. 
    // eg. ( (Integer_1 < Integer_2) && (Integer_2 < Integer_3) )

    std::cout << "10 < 30 and 20 < 10 ? : " << ((Integer_Variable_One < Integer_Variable_Three) && (Integer_Variable_Two < Integer_Variable_One)) << std::endl; // false
    
    std::cout << "10 == 10 and 20 == 20 : " << ((Integer_Variable_One == Integer_Variable_One) || (Integer_Variable_Two == Integer_Variable_Two)) << std::endl; // true
    std::cout << "10 == 20 and 20 == 20 : " << ((Integer_Variable_One == Integer_Variable_Two) || (Integer_Variable_Two == Integer_Variable_Two)) << std::endl; // true
    std::cout << "10 == 30 and 20 == 10 : " << ((Integer_Variable_One == Integer_Variable_Three) || (Integer_Variable_Two == Integer_Variable_One)) << std::endl; // false

    return 0;
}
