// Ravesli_30.cpp : This file contains the 'main' function. Program execution begins and ends there.
// VOLUME 2. Lessons 28-37. VARIABLES: types, sizes, and limits

#include <iostream>
#include <Windows.h> // 65001 — код UTF-8
#include <cstdint> // для целочисленных типов данных фиксированного размера
#include <iomanip> // для std::setprecision()

int main()
{
    SetConsoleOutputCP(65001); // 65001 — код UTF-8

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
    std::cout << "\n" << "переполнение!" << std::endl;
    std::cout << "x was: " << unx << std::endl;
    unx = unx + 12; // 65536 - это число больше максимально допустимого числа из диапазона допустимых значений. Следовательно, произойдет переполнение, так как переменнная x не может хранить 17 бит
    std::cout << "x is now: " << unx << std::endl;
    // Аналогичным образом, мы получим переполнение, использовав число меньше минимального из диапазона допустимых значений :
    unsigned short y = 0; // наименьшее значение, которое 2-байтовая unsigned переменная может хранить
    std::cout << "y was: " << y << std::endl;
    y = y - 1; // переполнение!
    std::cout << "y is now: " << y << std::endl;
    // Правило: Никогда не допускайте возникновения переполнения в ваших программах!
    std::cout << "\n" << "целое число не округляется!" << std::endl;
	std::cout << 8 / 5 << std::endl; // Результат: 1, а не 1.6, так как оба числа являются целыми, и результатом будет целое число.
    // В языке C++ при делении целых чисел результатом всегда будет другое целое число. А такие числа не могут иметь дробь (она просто отбрасывается, не округляется!).

    //32. Целочисленные типы фиксированного размера
    std::cout << "\n" << "Целочисленные типы фиксированного размера" << std::endl;
    std::int16_t fixed_i(5); // прямая инициализация
    std::cout << fixed_i << std::endl;

    std::cout << "\n" << "std::int8_t и std::uint8_t 65 будет интерпретироваться как символ 'A' в таблице ASCII" << std::endl;
    std::int8_t myint = 65;
	std::cout << myint << std::endl; // Результат: A, а не 65, так как std::int8_t может быть обработан как тип char, и при выводе на экран он будет интерпретироваться как символ, соответствующий этому числу в таблице ASCII. 
    // В данном случае, число 65 соответствует символу 'A' в таблице ASCII.
    // 
    // Правило: Избегайте использования std::int8_t и std::uint8_t. Если вы используете эти типы, то будьте внимательны, так как в некоторых случаях они могут быть обработаны как тип char.
    // 
    // Бьёрн Страуструп, создатель языка C++, считает, что: 
    // «Использовать тип unsigned (вместо signed) для получения еще одного бита для представления положительных целых чисел, почти никогда не является хорошей идеей».

	// 33. Типы данных с плавающей точкой
    int n(5); // 5 - это целочисленный тип 
    double d(5.0); // 5.0 - это тип данных с плавающей точкой (по умолчанию double)
    float f(5.0f); // 5.0 - это тип данных с плавающей точкой ("f" от "float")
	// Обратите внимание, литералы типа с плавающей точкой по умолчанию относятся к типу double. f в конце числа означает тип float. 
    // float занимает 4 байта, а double - 8 байт. Тип long double может занимать 12 или 16 байт, в зависимости от платформы.
    // Экспоненциальная запись
    double d1(5000.0);
    double d2(5e3); // другой способ присвоить значение 5000

    double d3(0.05);
    double d4(5e-2); // другой способ присвоить значение 0.05
    // 34500.0 -> 3.45000e4 (6 значащих цифр). Здесь конечные нули не игнорируются, так как в исходном числе есть точка, которая разделяет целую и дробную части. 
    // Хотя эта точка никак не влияет на само число, она влияет на его точность. Если бы исходное число было указано, как 34500, то ответ равнялся бы 3.45e4.

    std::cout << "\n" << "точность в 16 цифр" << std::endl;
    std::cout << std::setprecision(16); // задаем точность в 16 цифр
    float f_f = 3.33333333333333333333333333333333333333f;
    std::cout << f_f << std::endl;
    double d_d = 3.3333333333333333333333333333333333333;
    std::cout << d_d << std::endl;
    // Точность зависит от размера типа данных (в типе float точность меньше, чем в типе double). 
    // точность float: от 6 до 9 цифр (в основном 7); 
    // точность double: от 15 до 18 цифр (в основном 16);
    // точность long double: 15, 18 или 33 цифры (в зависимости от того, сколько байт занимает тип данных на компьютере).
    // Правило: Используйте по умолчанию тип double вместо типа float, так как его точность выше.
    double p_d(0.1);
    std::cout << "\n" << "точность cout по умолчанию (6 цифр)" << std::endl;
    std::cout << p_d << std::endl; // используем точность cout по умолчанию (6 цифр)
    std::cout << std::setprecision(17);
    std::cout << p_d << std::endl;

    double zero = 0.0;
    std::cout << "\n" << "положительная бесконечность" << std::endl;
    double posinf = 5.0 / zero; // положительная бесконечность 
    std::cout << posinf << "\n";
    
    std::cout << "\n" << "отрицательная бесконечность" << std::endl;
    double neginf = -5.0 / zero; // отрицательная бесконечность 
    std::cout << neginf << "\n";

    std::cout << "\n" << "не число (математически некорректно)" << std::endl;
    double nan = zero / zero; // не число (математически некорректно)
    std::cout << nan << "\n";
    // inf означает «бесконечность», а ind означает «неопределенный» (от англ. «indeterminate»). 

    // 34. Логический тип данных bool

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
