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
	cout << "Название: " << _Name << endl;
	cout << "Автор: " << _Author << endl;
	cout << "Год: " << _Year << endl;
	cout << "Кол-во стр.: " << _NumberOfPages << endl;
}