#include "Book.h"
Book::Book(string name,
	string author,
	int year,
	int numberofpages)
{
	cout << "Book constructor..." << endl;
	_Name = name;
	_Author = author;
	_Year = year;
	_NumberOfPages = numberofpages;
}
void Book::PrintInfo()
{
	cout << "��������: " << _Name << endl;
	cout << "�����: " << _Author << endl;
	cout << "���: " << _Year << endl;
	cout << "���-�� ���.: " << _NumberOfPages << endl;
}