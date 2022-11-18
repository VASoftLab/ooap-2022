#include "ClassB.h"

ClassB::ClassB(int A, int B) : ClassA(A)
{
	_B = B;
}

void ClassB::Print()
{
	std::cout << "A = " << getA() << std::endl;
	std::cout << "B = " << _B << std::endl;
}
