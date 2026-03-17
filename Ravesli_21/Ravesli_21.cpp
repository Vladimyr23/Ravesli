// Ravesli_21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "add.h"

// Макросы-объекты с текст_замена 
// #define идентификатор текст_замена
#define MY_FAVORITE_NUMBER 9 // так не стоит делать, на следующих уроках.

// Макросы-объекты без текст_замена
// #define идентификатор
#define USE_YEN // Любое дальнейшее появление идентификатора USE_YEN удаляется и заменяется «ничем» (пустым местом)!
// эта форма макросов считается приемлемой для использования.

#define MY_NAME "Vladimir"

#define PRINT_JOE

void doSomething(); // предварительное объявление функции doSomething()

int main()
{
    std::cout << "The sum of 3 and 4 is " << add(3, 4) << std::endl;

	// Макросы-объекты с текст_замена Lesson 22
    std::cout << "My favorite number is: " << MY_FAVORITE_NUMBER << std::endl; // так не стоит делать, на следующих уроках.

    std::cout << "My name is: " << MY_NAME << std::endl;

#ifdef PRINT_JOE
    std::cout << "Joe is defined" << std::endl;
#endif

#ifndef PRINT_BOB
    std::cout << "Bob is not defined" << std::endl;
#endif

#define PRINT
    doSomething(); // Результат выполнения программы: Not printing!
    // Несмотря на то, что мы объявили PRINT в main (#define PRINT), это все равно не имеет никакого влияния на что-либо в print_not.cpp.
    return 0;
}

// Правило: Используйте угловые скобки для подключения «системных» заголовочных файлов и двойные кавычки для ваших заголовочных файлов.

// Правило: При подключении заголовочных файлов из Стандартной библиотеки С++, используйте версию без «.h» (если она существует). 
// Пользовательские заголовочные файлы должны иметь окончание «.h».

// Lesson 24 -- Таким образом, std::cout состоит из двух частей: идентификатор cout и пространство имен std.


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
