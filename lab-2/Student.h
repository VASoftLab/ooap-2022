#pragma once
#include <string>
#include <iostream>
using namespace std;
class Student
{
private:
	string _Name; // ��� ��������
	string _DOB; // ���� ��������
	int _Number; // ����� �������
public:
	void setName(string name);
	string getName();	
	void setDOB(string dob);
	string getDOB();
	void setNumber(int number);
	void printInfo();
};

