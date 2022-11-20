#pragma once
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Planet
{
	string _name;
	unsigned long _mass;
	unsigned long _diameter;
public:
	Planet(); // ����������� �� ���������
	Planet(string name, unsigned long mass, unsigned long diameter);
	string PrintInfo();
	Planet operator+(Planet pln); // ���������� �������� +
	bool operator>(Planet pln); // ���������� �������� ���������

	friend ostream& operator<<(ostream& stream, const Planet& pln);
};

