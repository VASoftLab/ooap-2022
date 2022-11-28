#include "ExBook.h"
ExBook::ExBook(string name,
	string author,
	int year,
	int numberofpages,
	string museumname,
	string invenorynumber) :
	Book(name, author, year, numberofpages),
	Exhibit(museumname, invenorynumber)
{
	cout << "ExBook constructor..." << endl;
}