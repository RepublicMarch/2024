#include <iostream>
#include <ctime>
#include <cstdlib>

// x range (3 < x < 100000)
// Define Selection Sort Algorithm and measure complexity of algorithm O(n)

int x, Set_Of_Real_Numbers[100000];

void swap(int a, int b)
{
    int Transition = Set_Of_Real_Numbers[a];
    Set_Of_Real_Numbers[a] = Set_Of_Real_Numbers[b];
    Set_Of_Real_Numbers[b] = Transition;
}

void Selection_Sort(void)
{
    for (int Iterator = 0; Iterator < x - 1; Iterator++)
    {
        int minIndex = Iterator; 
        for (int j = Iterator + 1; j < x; j++)
        {
            if (Set_Of_Real_Numbers[j] < Set_Of_Real_Numbers[minIndex])
            {
                minIndex = j; 
            }
        }
        if (minIndex != Iterator) 
        {
            swap(Iterator, minIndex);
        }
    }
}

int main() 
{
    std::cout << "Enter the x ";
    std::cin >> x;

    srand(static_cast<unsigned int>(time(NULL)));
    for (int Iterator = 0; Iterator < x; Iterator++)
    {
        Set_Of_Real_Numbers[Iterator] = rand(); 
    }

    int start = clock();

    Selection_Sort();

    double duration = static_cast<double>(clock() - start) / CLOCKS_PER_SEC;
    std::cout << "O(n) = " << duration << " sec" << std::endl; 

    return 0;
}
