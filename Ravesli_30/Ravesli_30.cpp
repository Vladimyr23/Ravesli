// Ravesli_30.cpp : This file contains the 'main' function. Program execution begins and ends there.
// VOLUME 2. Lessons 28-37. VARIABLES: types, sizes, and limits

#include <iostream>

int main()
{
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes" << std::endl;
    std::cout << "char:\t\t" << sizeof(char) << " bytes" << std::endl;
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << std::endl;
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << std::endl;
    std::cout << "short:\t\t" << sizeof(short) << " bytes" << std::endl;
    std::cout << "int:\t\t" << sizeof(int) << " bytes" << std::endl;
    std::cout << "long:\t\t" << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long:\t" << sizeof(long long) << " bytes" << std::endl;
    std::cout << "float:\t\t" << sizeof(float) << " bytes" << std::endl;
    std::cout << "double:\t\t" << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double:\t" << sizeof(long double) << " bytes \n" << std::endl;
    
    // Интересно то, что sizeof — это один из трех операторов в языке C++, который является словом, а не символом (еще есть new и delete).
    
    int x;
    std::cout << "x is " << sizeof(x) << " bytes" << std::endl;

	// Целочисленные типы данных
    // Примечание: Тип char — это особый случай: он является как целочисленным, так и символьным типом данных. 
    // Он может использоваться для хранения символов, но также может использоваться для хранения небольших целых чисел. 
    // Размер типа char всегда составляет 1 байт, но количество битов в байте может варьироваться в зависимости от платформы (обычно 8 бит). Поэтому диапазон значений для типа char может быть от -128 до 127 (для signed char) или от 0 до 255 (для unsigned char), в зависимости от того, является ли он знаковым или беззнаковым.
    char c;
    short int si; // допустимо
    short s;      // предпочтительнее
    int i;
    long int li; // допустимо
    long l;      // предпочтительнее
    long long int lli; // допустимо
    long long ll;      // предпочтительнее

    // Целочисленный тип signed (со знаком). 1-байтовая целочисленная переменная со знаком (signed) имеет диапазон значений от -128 до 127, т.е. любое значение от -128 до 127 (включительно) может храниться в ней безопасно.
    signed char c;
    signed short s;
    signed int i;
    signed long l;
    signed long long ll;
    
    // Целочисленный тип unsigned (без знака). 1-байтовая целочисленная переменная без знака (unsigned) имеет диапазон значений от 0 до 255.
    unsigned char c;
    unsigned short s;
    unsigned int i;
    unsigned long l;
    unsigned long long ll;

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
