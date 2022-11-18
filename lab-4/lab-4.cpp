#include <iostream>
#include "ClassA.h"
#include "ClassB.h"

int main()
{
    std::cout << "Hello World!\n";
    ClassA A(10);
    ClassB B(10, 20);

    A.Print();
    B.Print();
}