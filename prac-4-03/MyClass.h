#pragma once
#include <iostream>
using namespace std;
class MyClass
{
private:
	int _size;		// ����������� �������
	int* _p;		// ��������� �� ������	
public:
	MyClass();		// ����������� �� ���������
	MyClass(int n);	// ����������� � �����������
	MyClass(MyClass& obj);	// ����������� �����������
	~MyClass();		// ����������
	void Print();
};

