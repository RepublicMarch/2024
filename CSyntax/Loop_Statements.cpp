#include <iostream>

int main()
{
    // Before you reading this, i used some more specific name for Iterator (or known as i) because this sometimes confuse me
    // like, ' i ' can be imaginary number; also 'Iterator' as shorten 'i' notation seems pain as for me

    // For statement
    for(unsigned int Iterator = 0; Iterator < 10; Iterator++)
    {
        std::cout << "Iterator Value : " << Iterator << std::endl;
    }

    // Indepdent Variables
    unsigned Starting_Value {};
    unsigned Ending_Value {10};

    for(Starting_Value; Starting_Value < Ending_Value; Starting_Value++)
    {
        std::cout << "Starting Value : " << Starting_Value << std::endl;
    }

    // While statement
    while(Starting_Value < Ending_Value)
    {
        std::cout << "Starting Value : " << Starting_Value << std::endl;
        Starting_Value ++;
    }

    // while statement is useful for conditional variables. for eg :
    unsigned int Health {100};
    bool GotAttacked {false};
    bool OnPoision {false};


    if(GotAttacked == false && Health == 100)
    {
        OnPoision = true;
    }


    while(OnPoision == true && Health > 99)
    {
        -- Health;
        std::cout << "Poisioned! -1 Health " << std::endl;
        std::cout << "Your Current health : " << Health << std::endl;
        GotAttacked = false;
    }



    return 0;
}