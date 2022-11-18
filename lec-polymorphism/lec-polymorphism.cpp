#include <iostream>
using namespace std;

// Базовый класс
class Base
{
public:
    void Print()
    {
        cout << "Метод Print() класса Base" << endl;
    }
};

class Derived : public Base
{
public:
    void Print()
    {
        cout << "Метод Print() класса Derived" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Base base;
    Derived derived;

    base.Print();
    derived.Print();

    cout << "Done..." << endl;
}