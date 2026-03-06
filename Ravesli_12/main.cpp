#include <iostream> // для std::cout и std::endl

// Объявление функции doPrint(), которую мы будем вызывать
void doPrint() {
    std::cout << "In doPrint()" << std::endl;
}

int return7()
{
    // Эта функция возвращает целочисленное значение, поэтому мы должны использовать оператор return
    return 7; // возвращаем число 7 обратно в caller
}

int getValueFromUser()
{
   std::cout << "Enter an integer: ";
   int x;
   std::cin >> x;
   return x;
}

void printO()
{
   std::cout << "O" << std::endl;
}

void printK()
{
   std::cout << "K" << std::endl;
}

// Функция printOK() вызывает как printO(), так и printK()
void printOK()
{
   printO();
   printK();
}


// Объявление функции main()
int main()
{
    std::cout << "Starting main()" << std::endl;
    doPrint(); // прерываем выполнение функции main() вызовом функции doPrint(). Функция main() в данном случае является caller-ом

    std::cout << return7() << std::endl; // выведется 7
    std::cout << return7() + 3 << std::endl; // выведется 10

    return7(); // возвращаемое значение 7 игнорируется, так как функция main() ничего с ним не делает

    int a = getValueFromUser(); // первый вызов функции getValueFromUser()
    int b = getValueFromUser(); // второй вызов функции getValueFromUser()
    std::cout << a << " + " << b << " = " << a + b << std::endl;

    printOK();

    std::cout << "Ending main()" << std::endl;

    return 0;
}
