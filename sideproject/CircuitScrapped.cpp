#include <iostream>

int main() {
    
    char Answer {'n'};
    char TypeLogicGate {'n'};
    bool Logicstatement {true};
    bool Electronicstatement {true};
    bool Desirablestatement {true};
    
    
    std::cout << "Logic Circuit test" << std::endl;
    std::cout << "------------------------------------------------------------------" << std::endl;
    std::cout << "Type your Logic statement. T/F\n (T = 1, F = 0)" << std::endl;
    
    std::cin >> Answer;
    
    if(Answer == 'T')
    {
        Logicstatement = true;
        std::cout << "your Logicstatement : " << Logicstatement << std::endl;
    }
    else if(Answer == 'F')
    {
        Logicstatement = false;
        std::cout << "Your Logicstatement : " << Logicstatement << std::endl;
    }
    else
    {
        std::cout << "please type T/F as character.\n" << std::endl;
    }
    
    std::cout << "------------------------------------------------------------------" << std::endl;

    std::cout << "Type your Electronic statement. T/F/X\n (T = 1, F = 0, X = Null)" << std::endl;
    std::cin >> Answer;

    
    if(Answer == 'T')
    {
        Electronicstatement = true;
        std::cout << "your Electronicstatement : " << Electronicstatement << std::endl;
    }
    else if(Answer == 'F')
    {
        Electronicstatement = false;
        std::cout << "Your Electronicstatement : " << Electronicstatement << std::endl;
    }
    else if(Answer == 'X')
    {
        std::cout << "Your Electronicstatement : X" << std::endl;
        Electronicstatement = 'X';
    }
    else
    {
        std::cout << "please type T/F/X  character.\n" << std::endl;
    }
    
    std::cout << "------------------------------------------------------------------" << std::endl;
    
    std::cout << "Type your Desirable Gate. T/F/X/N\n (T = Positive, F = Negative, X = XGate, N = NOTGate ) " << std::endl;
    std::cin >> Answer;

    
    if(Answer == 'T')
    {
        TypeLogicGate = 'T';
        std::cout << "your Desirablestatement : " << Electronicstatement << std::endl;
    }
    else if(Answer == 'F')
    {
        TypeLogicGate = 'F';
        std::cout << "Your Desirablestatement : " << Electronicstatement << std::endl;
    }
    else if(Answer == 'X')
    {
        TypeLogicGate = 'X';
        std::cout << "Your Desirablestatement : " << TypeLogicGate << " Gate"<< std::endl;
    }
    else if(Answer == 'N')
    {
        TypeLogicGate = 'N';
        std::cout << "Your Desirablestatement : " << TypeLogicGate << " Gate"<< std::endl;
    }
    else
    {
        std::cout << "please type T/F/X/N as character.\n" << std::endl;
    }
    
    std::cout << "-----------------------------------------------------------------------------------------------------------" << std::endl;
    
    
    // if (result)
    // REMEMBER OPERATORS!
    // == - is it same as condition a, b?
    // && - If 2 statement is true, then it is true. but if one of them is false, then evrything is false.
    // || - If 2 statement with 1 is true, then it is true
    // same from above. it ignores everything if it includes false.
    
    // FLOW CONTROL LOGIC PRACTICE FOR LOGIC CIRCUIT
    
    // POSITIVE
    if(Desirablestatement == true && TypeLogicGate == 'T')
    {
        std::cout << "POSTIVE LOGIC GATE" << std::endl;
        // AND Logic Gate 
        if(Logicstatement == true && Electronicstatement == true && TypeLogicGate == 'T')
        {
            std::cout << "True\n AND Logic Gate - (1 1 = 1), (1 0 = 0)" << std::endl;
        }
        // OR Logic Gate
        else if(Logicstatement == true || Electronicstatement == true && TypeLogicGate == 'T')
        {
            std::cout << "True\n OR Logic Gate - (1 0 = 1), (0 1 = 1), (0 0 = 0) " << std::endl;
        }
        // EXCEPTION
        else
        {
            std::cout << "Logic gate is missing. seems like i did mistake here." << std::endl;
        }
    }

    // NEGATIVE
    else if(Desirablestatement == false && TypeLogicGate == 'F')
    {
        std::cout << "NEGATIVE LOGIC GATE" << std::endl;
        // NAND Logic Gate
        if(Logicstatement == true && Electronicstatement == true && TypeLogicGate == 'F')
        {
            std::cout << "False\n NAND Logic Gate - (1 1 = 0), (0 1 = 1) " << std::endl;
        }
        // NOR Logic Gate
        else if(Logicstatement == true && Electronicstatement == true && TypeLogicGate == 'F')
        {
            std::cout << "False\n NOR Logic Gate - (1 0 = 0) (0 1 = 0) (0 0 = 1)" << std::endl;
        }
        else
        {
            std::cout << "Logic gate is missing. seems like i did mistake here." << std::endl;
        }
    }

    // POSITIVE X 
    else if (Desirablestatement == true && TypeLogicGate == 'X')
    {
        std::cout << "POSTIVE X LOGIC GATE" << std::endl;
        // XOR Logic Gate
        if(Logicstatement = true && Electronicstatement == 'X' && TypeLogicGate == 'X')
        {
            std::cout << "True\n XOR Logic Gate - (1 = 1), (1, a b c = 1)" << std::endl;
        }
        else
        {
            std::cout << "Logic gate is missing. seems like i did mistake here." << std::endl;
        }
    }

    // NEGATIVE X
    else if (Desirablestatement == false && TypeLogicGate == 'X')
    {
        std::cout << "NEGATIVE X LOGIC GATE" << std::endl;
        // XNOR Logic Gate
        if(Logicstatement = true && Electronicstatement == 'X' && TypeLogicGate == 'X')
        {
            std::cout << "False\n XNOR Logic Gate - (1 = 0), (1, a b c = 0)" << std::endl;
        }
        else
        {
            std::cout << "Logic gate is missing. seems like i did mistake here." << std::endl;
        }
    }

    // NOT GATE POSITIVE
    else if (Desirablestatement == true && TypeLogicGate == 'N')
    {
        std::cout << "POSITIVE NOT/INVERTER LOGIC GATE" << std::endl;
        // NOT Logic Gate
        if(Logicstatement == true && Electronicstatement == 'N' && TypeLogicGate == 'N')
        {
            std::cout << "False\n NOT Logic Gate Or 'INVERTER' (1 = 0), (0 = 1) " << std::endl;
        }
        else
        {
            std::cout << "Logic gate is missing. seems like i did mistake here." << std::endl;
        }
    }

    // NOT GATE NEGATIVE
    else if (Desirablestatement == false && TypeLogicGate == 'N')
    {
        std::cout << "NEGATIVE NOT/INVERTER LOGIC GATE" << std::endl;
        // NOT Logic Gate
        if(Logicstatement == false && Electronicstatement == 'N' && TypeLogicGate == 'N')
        {
            std::cout << "True\n NOT Logic Gate Or 'INVERTER' (1 = 0), (0 = 1) " << std::endl;
        }
        else
        {
            std::cout << "Logic gate is missing. seems like i did mistake here." << std::endl;
        }
    }

    return 0;
}