#include <iostream>
using namespace std;

class A
{
public:
    void PrintInfo()
    {
        cout << "Информация..." << endl;
    }
};
class B : public A
{};
class C : public A
{};
class D : public B, public C
{};

int main()
{    
    setlocale(LC_ALL, "Russian");
    D objD; // Создаем объект класса D
    objD.A::PrintInfo(); // Вызов метода
    objD.B::PrintInfo(); // Вызов метода
    objD.C::PrintInfo(); // Вызов метода    
    return 0;
}

