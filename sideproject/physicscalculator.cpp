#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    
    // Basics of Physical Dynamics in C++
    // Tried to higher readability with variable. v0(First_Speed) such mathmathic simplified notation are not used.
    // Vector usage - (vec)
    
    // ---------------------------------------- [ VARIABLES ] ----------------------------------------

    char Answer {'n'};
    int Displacement {}; // s (vec)
    int Distance {}; // d
    unsigned short int First_Time {}; // t0
    unsigned short int Later_Time {}; // t1
    int Delta_Time {}; // dt
    int First_Speed {}; // v0
    int Later_Speed {}; // v1
    int First_Velocity {}; // v0 (vec)
    int Later_Velocity {}; // v1 (vec)
    int Acceleration = {}; // a
    int Average_Acceleration = {}; // v * 1/2 
    double Average_Acceleration_2 = {}; // (v0 * t) + 1/2 * a * t ^ 2 First_Speed * Delta_Time + Acceleration * pow(Delta_Time, 2) / 2
    int Average_Speed = {}; // v avg = d / t1 - t0
    int Displacement_With_Average_Speed = {}; // s = v(avg) * Dt 

 // ---------------------------------------- [ First_Diaglogue ] ----------------------------------------
    
    std::cout << "Hi, what kind of Physical quantity do you wanna get?" << std::endl;
    std::cout << "------------------------------------------------------------------------------- " << std::endl;
    std::cout << "Speed - A" << std::endl;
    std::cout << "Velocity - B" << std::endl;
    std::cout << "Acceleration - C" << std::endl;
    std::cout << "Average_Speed - D" << std::endl;
    std::cout << "Average_Accleration - E " << std::endl;
    std::cout << "Displacement - F" << std::endl;
    std::cout << "------------------------------------------------------------------------------- " << std::endl;
    std::cout << "Please type a one character preciously. " << std::endl;
    std::cin >> Answer;
    
 // ---------------------------------------- [ Main_Function ] ----------------------------------------
    if(Answer == 'A'){
        
    std::cout << "Speed" << std::endl;
        
    std::cout << "You are now on : Speed Calculation\n" << std::endl;
    
    std::cout << "Enter the amount of Object's Distance. " << std::endl;
    std::cin >> Distance;
    std::cout << "Value of Distance : " << Distance << std::endl;
    
    std::cout << "Enter the First Time. \n" << std::endl;
    std::cin >> First_Time;
    std::cout << "First time value : " << First_Time << std::endl;
    
    First_Speed = {Distance / First_Time}; // t/s
    
    std::cout << "Amount of Speed : " << First_Speed << std::endl;
    }
    
    else if(Answer == 'B'){
    std::cout << "You are now on : Velocity Calculation" << std::endl;
    
    std::cout << "Enter the Displacement : " << std::endl;
    std::cin >> Displacement;
    std::cout << "Displacement : " << Displacement << std::endl;
    
    std::cout << "Enter the First Time : " << std::endl;
    std::cin >> First_Time;
    std::cout << "First time value : " << First_Time << std::endl;
    
    First_Velocity = {Displacement / First_Time}; // d/s
    
    std::cout << "Amount of Velocity : " << First_Velocity << std::endl;
    }
    
    else if(Answer == 'C'){
    std::cout << "You are now on : Acceleration Calculation" << std::endl;
    
    std::cout << "Enter the First Velocity : " << std::endl;
    std::cin >> First_Velocity;
    std::cout << "First Velocity : " << First_Velocity << std::endl;
    
    std::cout << "Enter the Later Velocity : " << std::endl;
    std::cin >> Later_Velocity;
    std::cout << "Later Velocity : " << Later_Velocity << std::endl;
    
    std::cout << "Enter the Delta_Time : " << std::endl;
    std::cin >> Delta_Time;
    std::cout << "Delta Time : " << Delta_Time << std::endl;
    
    Acceleration = {(Later_Velocity - First_Velocity) / Delta_Time}; // a = (v1 - v0) / dt
    std::cout << "Acceleration : " << Acceleration << std::endl;
    
    }
    else if(Answer == 'D'){
        std::cout << "You are now on : Average Speed Calculation" << std::endl;

        std::cout << "Type Displacement : " << std::endl;
        std::cin >> Displacement;
        std::cout << "Displacement : " << Displacement << std::endl;

        std::cout << "Type Delta Time : " << std::endl;
        std::cin >> Delta_Time;
        std::cout << "Delta_Time : " << Displacement << std::endl;


        Average_Speed = {(Displacement/Delta_Time)};

        std::cout << "Average Speed : " << Average_Speed << std::endl;

    }
    else if(Answer == 'E'){
        std::cout << "You are now on : Average Accleration Calculation" << std::endl;
        std::cout << "Do you have Later speed? Y/N" << std::endl;
        std::cin >> Answer;

        if(Answer == 'Y'){
        std::cout << "Type Later speed : " << std::endl;
        std::cin >> Later_Speed;
        std::cout << "Later Speed : " << Later_Speed << std::endl;

        Average_Acceleration = {(Later_Speed/2)};

        std::cout << "Average Accleration : " << Average_Acceleration << std::endl;

        }

        else if(Answer == 'N'){

        std::cout << "Type First speed : " << std::endl;
        std::cin >> First_Speed;
        std::cout << "First Speed : " << First_Speed << std::endl;

        std::cout << "Type First Time : " << std::endl;
        std::cin >> First_Time;
        std::cout << "First Time : " << First_Time << std::endl;

        std::cout << "Type Acceleration : " << std::endl;
        std::cin >> Acceleration;
        std::cout << "Acceleration : " << Acceleration << std::endl;

        Average_Acceleration_2 = {(First_Speed * Delta_Time) + (Acceleration * pow(Delta_Time, 2) / 2)};

        }

        else{
        std::cout << "Y/N only" << std::endl;
        }
        
    }
    else if(Answer == 'F'){
        std::cout << "You are now on : Displacement Caculation" << std::endl;

        std::cout << "Type Average Speed : " << std::endl;
        std::cin >> Average_Speed;
        std::cout << "Average Speed : " << Average_Speed << std::endl;

        std::cout << "Type Delta Time : " << std::endl;
        std::cin >> Delta_Time;
        std::cout << "Delta_Time : " << Delta_Time << std::endl;

        Displacement_With_Average_Speed = {Average_Acceleration * Delta_Time};

        std::cout << "Displacement : " << Displacement_With_Average_Speed << std::endl;


    }
    else{
    std::cout << "umm sorry u typed smtn else" << std::endl;
    }   
    
    return 0;
    
    }