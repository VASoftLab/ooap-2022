#include "MyClass.h"
MyClass::MyClass()
{
	_size = 5;
	// Выделяем память под массив
	_p = new int[_size];
	for (int i = 0; i < _size; i++)
		_p[i] = i;
}
MyClass::MyClass(int n)
{
	_size = n;
	// Выделяем память под массив
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
	// Очищаем память
	if (_p != nullptr)
		delete[] _p;
}
void MyClass::Print()
{	
	if (_p != nullptr)
		for (int i = 0; i < _size; i++)
			cout << "p[" << i << "] = " << _p[i] << endl;
}