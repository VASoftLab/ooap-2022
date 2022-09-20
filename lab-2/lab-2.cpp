#include <iostream>
#include "Student.h"
int main()
{
    // Кириллица для консоли
    setlocale(LC_ALL, "Russian");

    Student student01, student02, student03;
    
    student01.setName("Иванов Иван Ивавнович");
    student01.setDOB("01-Января-2001");
    student01.setNumber(1001);

    student02.setName("Петров Петр Петрович");
    student02.setDOB("02-Февраля-2002");
    student02.setNumber(1002);

    student03.setName("Сидоров Сидор Сидорович");
    student03.setDOB("03-Марта-2003");
    student03.setNumber(1003);

    cout << "СПИСОК СТУДЕНТОВ ГРУППЫ:" << endl;
    cout << student01.getName() << endl;
    cout << student02.getName() << endl;
    cout << student03.getName() << endl;

    cout << endl;
    cout << "ДЕТАЛЬНАЯ ИНФОРМАЦИЯ О СТУДЕНТАХ:" << endl;
    
    student01.printInfo();
    cout << endl;
    student02.printInfo();
    cout << endl;
    student03.printInfo();
}