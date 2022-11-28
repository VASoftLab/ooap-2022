#pragma once
#include "Book.h"
#include "Exhibit.h"
#include <iostream>
using namespace std;
class ExBook : public Book, public Exhibit
{
public:
	ExBook(string name,
		string author,
		int year,
		int numberofpages,
		string museumname,
		string invenorynumber
	);	
};

