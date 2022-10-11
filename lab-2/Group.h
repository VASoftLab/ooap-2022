#pragma once
#include <string>
#include <vector>
#include "Student.h"

using namespace std;

class Group
{
private:
	string _Name; // Øèôğ ãğóïïû
	vector<Student> _Students;	
public:
	void setName(string name);
	void addStudent(Student student);
	void printInfo();

	int getStudentsCount();
	void removeStudent(int number);
};

