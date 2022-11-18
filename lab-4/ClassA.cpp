#include "ClassA.h"
ClassA::ClassA(int A)
{
	_A = A;
}

int ClassA::getA()
{
	return _A;
}

void ClassA::Print()
{
	std::cout << "A = " << _A << std::endl;
}