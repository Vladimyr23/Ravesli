// Ravesli_13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Эта функция не имеет параметров
void doPrint()
{
    std::cout << "In doPrint()" << std::endl;
}

// Эта функция имеет один параметр типа int: a
void printValue(int a)
{
    std::cout << a << std::endl;
}

void printValues(int a, int b)
{
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}

// Эта функция имеет два параметра типа int: a и b
int add(int a, int b)
{
    //std::cout << a + b << std::endl;
    return a + b;
}

int multiply(int c, int d)
{
    return c * d;
}

int doubleNumber(int n)
{
    return n * 2;
}

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    return x;
}

int main()
{
    doPrint();
    printValue(7); // 7 – это аргумент функции printValue()
    std::cout << add(4, 5) << std::endl; // 4 и 5 – это аргументы функции add()
    printValues(8, 9); // здесь два аргумента: 8 и 9
    
    std::cout << add(7, 8) << std::endl; // внутри функции add(): a = 7, b = 8, значит a + b = 15
    std::cout << multiply(4, 5) << std::endl; // внутри функции multiply(): c = 4, d = 5, значит c * d = 20

    // Мы можем передавать целые выражения в качестве аргументов
    std::cout << add(2 + 3, 4 * 5) << std::endl; // внутри функции add(): a = 5, b = 20, значит a + b = 25

    // Мы можем передавать переменные в качестве аргументов
    int x = 4;
    std::cout << add(x, x) << std::endl; // будет 4 + 4

    std::cout << add(1, multiply(2, 3)) << std::endl; // будет 1 + (2 * 3)
    std::cout << add(1, add(2, 3)) << std::endl; // будет 1 + (2 + 3)
	std::cout << doubleNumber(add(2, 3)) << std::endl; // будет (2 + 3) * 2

	int a = getValueFromUser();
	// Мы можем использовать возвращаемое значение функции getValueFromUser() в качестве аргумента для функции doubleNumber()
	std::cout << doubleNumber(a) << std::endl;

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
