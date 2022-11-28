#pragma once
#include <string>
#include <iostream>
using namespace std;
class Book
{
public:
	string _Name;
	string _Author;
	int _Year;
	int _NumberOfPages;

	Book(string name,
		string author,
		int year,
		int numberofpages);
	void PrintInfo();
};

