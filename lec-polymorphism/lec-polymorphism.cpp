#include <iostream>
using namespace std;

// ������� �����
class Base
{
public:
    void Print()
    {
        cout << "����� Print() ������ Base" << endl;
    }
};

class Derived : public Base
{
public:
    void Print()
    {
        cout << "����� Print() ������ Derived" << endl;
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