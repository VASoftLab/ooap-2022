#pragma once
#include <string>
#include <iostream>
using namespace std;
class Student
{
private:
	string _Name; // ФИО студента
	string _DOB; // Дата рождения
	int _Number; // Номер зачетки
public:
	void setName(string name);
	string getName();	
	void setDOB(string dob);
	string getDOB();
	void setNumber(int number);
	void printInfo();
};

