// Подключение библиотек
#include <iostream>
#include <iomanip>

// Подключение пространства имен
using namespace std;

int main()
{
    // Кириллица для консоли
    setlocale(LC_ALL, "Russian");
    
    cout << "Расчет периметра прямоугольника" << endl;
    
    double A; // Сторона А
    double B; // Сторона B
    double Perimeter; // Периметр    

    cout << "Введите сторону A (см): ";
    cin >> A;
    cout << "Введите сторону B (см): ";
    cin >> B;

    // Расчет периметра
    Perimeter = (A + B) * 2;

    cout << fixed; // Установить формат вывода (2 знака после запятой)
    cout << "Периметр прямоугольника: " << setprecision(2) << Perimeter << " (см)";
    cout << endl << "Нажмите любую клавишу для завершения..." << endl;
}