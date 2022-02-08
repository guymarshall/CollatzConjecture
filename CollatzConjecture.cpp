#include <iostream>

int collatz(int number)
{
    int counter = 0;
    // if even, divide by 2
    // else times by 3 and add 1
    while (number > 1)
    {
        counter++;
        if (number % 2 == 0)
        {
            number = number / 2;
        }
        else
        {
            number = (3 * number) + 1;
        }
    }

    return counter;
}

int main()
{
    std::cout << "Enter a positive integer: ";
    int userInput;
    std::cin >> userInput;

    int maxNumber = 0;
    int maxSteps = 0;

    for (int i = 1; i <= userInput; i++)
    {
        if (maxSteps < collatz(i))
        {
            maxSteps = collatz(i);
            maxNumber = i;
        }
        //printf("%d: %d\n", i, collatz(i));
        //std::cout << i << ": " << collatz(i) << std::endl;
    }

    std::cout << maxNumber << " had the maximum number of steps at " << maxSteps << std::endl;
}