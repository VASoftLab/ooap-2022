#include <iostream>
#include "MyClass.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    MyClass objA;
    MyClass objB(10);
    MyClass objC(objB);

    cout << "objA:" << endl;
    objA.Print();

    cout << endl << "objB:" << endl;
    objB.Print();
    
    cout << endl << "objC:" << endl;
    objC.Print();
}