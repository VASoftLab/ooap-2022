#include <iostream>
#include "ExBook.h"

void main()
{
	setlocale(LC_ALL, "Russian");
	ExBook exbook("���������� �������� ��� ������� ����",
		"�. ������", 1842, 335, "�������", "A1234567");

	// ���������� ���������������
	cout << endl << "���������� � �����" << endl;
	exbook.Book::PrintInfo();
	exbook.Exhibit::PrintInfo();
}
