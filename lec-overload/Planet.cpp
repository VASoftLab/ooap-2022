#include "Planet.h"

Planet::Planet()
{
	_name = "";
	_mass = 0;
	_diameter = 0;
}
Planet::Planet(string name, unsigned long mass, unsigned long diameter)
{
	_name = name;
	_mass = mass;
	_diameter = diameter;
}
string Planet::PrintInfo()
{
	stringstream ss; // ������� �����, ���������� �� �������
	ss << _name << ": m = " << _mass << " x 10^21 (��); d = " << _diameter << " (��).";
	return ss.str(); // ����������� � ������� ������
}
Planet Planet::operator+(Planet pln)
{
	return Planet("", _mass + pln._mass, _diameter + pln._diameter);
}
bool Planet::operator>(Planet pln)
{
	return _mass > pln._mass ? true : false;
}
ostream& operator<<(ostream& stream, const Planet& pln)
{
	stream << pln._name << ": m = " << pln._mass << " x 10^21 (��); d = " << pln._diameter << " (��).";
	return stream;
}
