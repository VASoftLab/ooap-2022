#include <iostream>
using namespace std;

class A
{
public:
    void PrintInfo()
    {
        cout << "����������..." << endl;
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
    D objD; // ������� ������ ������ D
    objD.A::PrintInfo(); // ����� ������
    objD.B::PrintInfo(); // ����� ������
    objD.C::PrintInfo(); // ����� ������    
    return 0;
}

