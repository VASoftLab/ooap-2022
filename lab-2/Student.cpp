#include "Student.h"
void Student::setName(string name)
{
	_Name = name;
}
string Student::getName()
{
	return _Name;
}
void Student::setDOB(string dob)
{
	_DOB = dob;
}
string Student::getDOB()
{
	return _DOB;
}
void Student::setNumber(int number)
{
	if (number > 0)
		_Number = number;
}
void Student::printInfo()
{
	cout << "���:\t" << _Name << endl;
	cout << "���� ��������:\t" << _DOB << endl;
	cout << "� �������:\t" << _Number << endl;
}