#include <iostream>
#include "MyClass.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    MyClass* objA = new MyClass();
    MyClass* objB = new MyClass(10);
    MyClass* objC = new MyClass(*objB);

    cout << "objA:" << endl;
    objA->Print();
    
    cout << endl << "objB:" << endl;
    objB->Print();

    delete objA;
    delete objB;

    cout << endl << "objC:" << endl;
    objC->Print();

    delete objC;
}