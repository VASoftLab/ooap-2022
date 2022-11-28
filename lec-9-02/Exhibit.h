#pragma once
#include <string>
#include <iostream>
using namespace std;
class Exhibit
{
public:
	string _MuseumName;
	string _InvenoryNumber;
	Exhibit(string museumname, string invenorynumber);
	void PrintInfo();
};

