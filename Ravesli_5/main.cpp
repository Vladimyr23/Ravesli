#include <iostream>

//using namespace std;

int main()
{
    std::cout << "Hello world!"<<std::endl;
    int a = 7;
    std::cout << "a is " << a<<std::endl;
    std::cout << "Hi! "<<std::endl;
    std::cout << "My name is Vladimir."<<std::endl;

    std::cout << "Enter a number: "; // просим пользователя ввести любое число
    //int a = 0;
    std::cin >> a; // получаем пользовательское число и сохраняем его в переменную a
    std::cout << "You entered " << a << std::endl;
    std::cout << "a is " << a<<std::endl;
    return 0;
}

