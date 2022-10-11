#include "MyClass.h"
MyClass::MyClass()
{
	_size = 5;
	// �������� ������ ��� ������
	_p = new int[_size];
	for (int i = 0; i < _size; i++)
		_p[i] = i;
}
MyClass::MyClass(int n)
{
	_size = n;
	// �������� ������ ��� ������
	_p = new int[_size];
	for (int i = 0; i < _size; i++)
		_p[i] = i;
}
MyClass::MyClass(MyClass& obj)
{
	_size = obj._size;
	_p = new int[_size];
	for (int i = 0; i < _size; i++)
		_p[i] = obj._p[i];
}
MyClass::~MyClass()
{
	// ������� ������
	if (_p != nullptr)
		delete[] _p;
}
void MyClass::Print()
{	
	if (_p != nullptr)
		for (int i = 0; i < _size; i++)
			cout << "p[" << i << "] = " << _p[i] << endl;
}