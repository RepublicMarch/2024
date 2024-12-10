#include <iostream>
#include <string> // std:getline(std::cin, CharValue) - Starndard Library

int main()
{
    // std::cout is for printing stuffs. - print()

    std::cout << "Hello Wolrd!" << std::endl;
    // you can simply take "endl;" as end the function.
    // std stands for Starndard System - one of composition of iostream 
    std::cout << "Integer value : " << 12 << std::endl; // this will print 12.


    int Interger_Value {23};

    std::cout << "Integer value is : " << Interger_Value << std::endl; // print 23

    std::cerr << "error output using cerr - : error message" << std::endl; // roblox's warn("Error")
    std::clog << "log message using clog - : log message " << std::endl; // doesnt exists in roblox. it just print()

    int Interger_Value_New;

    std::string Characters;

    std::cout << "Type your characters " << std::endl;

    // std:cin is for saving user input. similiar to C lang "scanf", doesnt exists in Roblox lua-u but it exists in Lua - io.read()
    // std::cin >> Characters; -  save user input in characetrs. similiar to C lang "scanf"
    std::getline(std::cin, Characters); // std::cin but better, it will allow to includes blankspaces. using "strings" library.

    std::cout << "Type your Integer_Value " << std::endl;
    std::cin >> Interger_Value_New;

    std::cout << "You typed : " << Characters << ", and Numbers were : " << Interger_Value_New << std::endl;


    return 0;
}