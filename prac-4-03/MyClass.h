#pragma once
#include <iostream>
using namespace std;
class MyClass
{
private:
	int _size;		// Размерность массива
	int* _p;		// Указатель на массив	
public:
	MyClass();		// Конструктор по умолчанию
	MyClass(int n);	// Конструктор с параметрами
	MyClass(MyClass& obj);	// Конструктор копирования
	~MyClass();		// Деструктор
	void Print();
};

