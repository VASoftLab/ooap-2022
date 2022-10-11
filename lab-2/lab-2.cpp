#include <iostream>
#include "Student.h"
#include "Group.h"
int main()
{
    // ��������� ��� �������
    setlocale(LC_ALL, "Russian");

    Student student01, student02, student03;
    
    student01.setName("������ ���� ���������");
    student01.setDOB("01-������-2001");
    student01.setNumber(1001);

    student02.setName("������ ���� ��������");
    student02.setDOB("02-�������-2002");
    student02.setNumber(1002);

    student03.setName("������� ����� ���������");
    student03.setDOB("03-�����-2003");
    student03.setNumber(1003);

    cout << "������ ��������� ������:" << endl;
    cout << student01.getName() << endl;
    cout << student02.getName() << endl;
    cout << student03.getName() << endl;
        
    cout << endl;
    cout << "��������� ���������� � ���������:" << endl;
    
    student01.printInfo();
    cout << endl;
    student02.printInfo();
    cout << endl;
    student03.printInfo();
    
    cout << endl;

    Group group01;
    group01.setName("���/�-20-1-�");
    group01.addStudent(student01);
    group01.addStudent(student02);
    group01.addStudent(student03);
    group01.printInfo();

    cout << endl;

    group01.removeStudent(1003);
    group01.printInfo();
}