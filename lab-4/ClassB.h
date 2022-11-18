#pragma once
#include <iostream>
#include "ClassA.h"
class ClassB : public ClassA
{
private:
    int _B;
public:
    ClassB(int A, int B);
    void Print();
};

