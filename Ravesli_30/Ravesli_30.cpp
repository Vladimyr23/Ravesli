// Ravesli_30.cpp : This file contains the 'main' function. Program execution begins and ends there.
// VOLUME 2. Lessons 28-37. VARIABLES: types, sizes, and limits

#include <iostream>
#include <cstdint> // для целочисленных типов данных фиксированного размера

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

	// 31. Целочисленные типы данных
    // Примечание: Тип char — это особый случай: он является как целочисленным, так и символьным типом данных. 
    // Он может использоваться для хранения символов, но также может использоваться для хранения небольших целых чисел. 
    // Размер типа char всегда составляет 1 байт, но количество битов в байте может варьироваться в зависимости от платформы (обычно 8 бит). Поэтому диапазон значений для типа char может быть от -128 до 127 (для signed char) или от 0 до 255 (для unsigned char), в зависимости от того, является ли он знаковым или беззнаковым.
    char c;
    short int s_i; // допустимо
    short s_s;      // предпочтительнее
    int i;
    long int li; // допустимо
    long l;      // предпочтительнее
    long long int lli; // допустимо
    long long ll;      // предпочтительнее
    // Целочисленный тип signed (со знаком). 1-байтовая целочисленная переменная со знаком (signed) имеет диапазон значений от -128 до 127, т.е. любое значение от -128 до 127 (включительно) может храниться в ней безопасно.
    signed char sc;
    signed short ss;
    signed int si;
    signed long sl;
    signed long long sll;    
    // Целочисленный тип unsigned (без знака). 1-байтовая целочисленная переменная без знака (unsigned) имеет диапазон значений от 0 до 255.
    unsigned char uc;
    unsigned short us;
    unsigned int ui;
    unsigned long ul;
    unsigned long long ull;
    // Программисты, как правило, избегают использования целочисленных типов unsigned, если в этом нет особой надобности, так как с переменными unsigned ошибок, по статистике, возникает больше, нежели с переменными signed.
    // Правило: Используйте целочисленные типы signed, вместо unsigned.
    unsigned short unx = 65535; // наибольшее значение, которое может хранить 16-битная unsigned переменная
    std::cout << "x was: " << unx << std::endl;
    unx = unx + 12; // 65536 - это число больше максимально допустимого числа из диапазона допустимых значений. Следовательно, произойдет переполнение, так как переменнная x не может хранить 17 бит
    std::cout << "x is now: " << unx << std::endl;
    // Аналогичным образом, мы получим переполнение, использовав число меньше минимального из диапазона допустимых значений :
    unsigned short y = 0; // наименьшее значение, которое 2-байтовая unsigned переменная может хранить
    std::cout << "y was: " << y << std::endl;
    y = y - 1; // переполнение!
    std::cout << "y is now: " << y << std::endl;
    // Правило: Никогда не допускайте возникновения переполнения в ваших программах!
	std::cout << 8 / 5 << std::endl; // Результат: 1, а не 1.6, так как оба числа являются целыми, и результатом будет целое число.
    // В языке C++ при делении целых чисел результатом всегда будет другое целое число. А такие числа не могут иметь дробь (она просто отбрасывается, не округляется!).

    //32. Целочисленные типы фиксированного размера

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
