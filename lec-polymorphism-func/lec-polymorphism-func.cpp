#include <iostream>
using namespace std;

class Operation
{
public:
    // Полиморфизм
    int Calulate(int A, int B) { return 0; };
    
    // Перегрузка
    void Print(int A);
    void Print(int A, int B);
};
class Sum : public Operation
{
public:
    int Calulate(int A, int B) override { return A + B; };
};
class Mult : public Operation
{
public:
    int Calulate(int A, int B) override { return A * B; };
};

int main()
{
    Sum sum;
    Mult mult;
    int A = 10; int B = 20;
    
    cout << "SUM: " << sum.Calulate(A, B) << endl;
    cout << "MULT: " << mult.Calulate(A, B) << endl;
    
    setlocale(LC_ALL, "Russian");
    std::cout << "Hello World!\n";    
}