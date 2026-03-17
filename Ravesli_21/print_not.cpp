#include <iostream>

void doSomething()
{
	// не объявляли идентификатор PRINT в этом файле, так что он не определен, и код внутри #ifdef PRINT не будет компилироваться.
#ifdef PRINT
    std::cout << "Printing!";
#endif
#ifndef PRINT
    std::cout << "Not printing!";
#endif
}