#include <iostream>
#include <thread> 
#include <chrono>  


int main()
{
    unsigned int Integer_Variable_One {};
    unsigned int Integer_Variable_Second {};
    char Answer {'n'};

    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout << "ZZZZZ    EEEEE    RRRR     OOO" << std::endl;
    std::cout << "   Z     E        R   R   O   O" << std::endl;
    std::cout << "  Z      EEEE     RRRR    O   O" << std::endl;
    std::cout << " Z       E        R R     O   O" << std::endl;
    std::cout << "ZZZZZ    EEEEE    R  RR    OOO" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout << "Loading.. Please wait.." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Welcome, Operator Republic_March ! " << std::endl;
    std::cout << "Please type valid arguement : " << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout << "Operation Status [Z]" << std::endl;
    std::cout << "Operator Status [E]" << std::endl;
    std::cout << "Request ETA Service [R]" << std::endl;
    std::cout << "End The Device [0]" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;

    std::cin >> Answer;

    if(Answer == 'Z')
    {
        std::cout << "Loading.. Please wait.." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Current Mode : Operation Status" << std::endl;
        std::cout << "Extraction - Secure, Survive, Return" << std::endl;
        std::cout << "Objective : Serach for Lynxgroup Documents 3/7" << std::endl;
        std::cout << "Operators Alive : 2" << std::endl;
        std::cout << "Zombies Alive : 3249236346" << std::endl;
        std::cout << "Bosses Alive : 7342" << std::endl;
        std::cout << "Wave : 1" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Area Before Collapse Timer : 32:19 " << std::endl;
    }
    else if(Answer == 'E')
    {
        std::cout << "Loading.. Please wait.." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "Username : Republic_March" << std::endl;
        std::cout << "Health - 92/100" << std::endl;
        std::cout << "Vest - 172/1200" << std::endl;
        std::cout << "Primary - HK416A5" << std::endl;
        std::cout << "Secondary - M45A1" << std::endl;
        std::cout << "Bank - 35000 Roble" << std::endl;
        std::cout << "Wallet - 2350 Roble" << std::endl;
        std::cout << "Totla Kills - 1" << std::endl;
    }
    else if(Answer == 'O')
        {
        std::cout << "Ending the device..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "PDA : Turned off. Wish you luck, Operator!" << std::endl;
    }



    return 0;
}