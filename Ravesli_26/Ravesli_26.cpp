// Ravesli_26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void printValue(int nValue)
{
    std::cout << nValue;
}

void CallC()
{
    std::cout << "C called" << std::endl;
}

void CallB()
{
    std::cout << "B called" << std::endl;
    CallC();
}

void CallA()
{
    CallB();
    CallC();
}

int main()
{
    printValue(5);

    // Lesson 27 variables tracing (quick watch)
    int x = 1;
    std::cout << x << " ";

    x = x + 1;
    std::cout << x << " ";

    x = x + 2;
    std::cout << x << " ";

    x = x + 4;
    std::cout << x << " ";

    CallA();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
