// Ravesli_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Lesson 19 function early declaration
int add(int x, int y); // предварительное объявление функции add() (используется её прототип)

void doMath(int a)
{
    int b = 5;
    std::cout << "doMath: a = " << a << " and b = " << b << std::endl;
    a = 4;
    std::cout << "doMath: a = " << a << " and b = " << b << std::endl;
}

int main()
{
    int a = 6;
    int b = 7;
    std::cout << "main: a = " << a << " and b = " << b << std::endl;
    doMath(a);
    std::cout << "main: a = " << a << " and b = " << b << std::endl;
    
    // Lesson 17
    int a = 3;                      // a – это переменная, 3 – это литерал
    std::cout << 5 + 2;             // 5 + 2 – это выражение, 5 и 2 – это литералы
    std::cout << "Hello, world!";   // "Hello, world" – это тоже литерал

    // Lesson 18
    int nCost = 57;
    int nPricePerItem = 24;
    int nValue = 5;
    int nNumberOfItems = 17;
    std::cout << "Hello world!" << std::endl;                  // cout и endl находятся в библиотеке iostream
    std::cout << "It is very nice to meet you!" << std::endl;  // эти комментарии более читабельны
    std::cout << "Yeah!" << std::endl;                         // не так ли?
    
    // cout и endl находятся в библиотеке iostream
    std::cout << "Hello world!" << std::endl;

    // эти комментарии читать легче
    std::cout << "It is very nice to meet you!" << std::endl;

    // ведь они разделены дополнительными строками
    std::cout << "Yeah!" << std::endl;

    // Lesson 19
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl; // это работает, так как мы предварительно (выше функции main()) объявили функцию add()
    return 0;
}

int add(int x, int y) // хотя определение функции add() находится ниже её вызова
{
    return x + y;
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
