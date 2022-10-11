#include "Group.h"
void Group::setName(string name)
{
	_Name = name;
}
void Group::addStudent(Student student)
{
	_Students.push_back(student);
}
void Group::printInfo()
{
	cout << "Информация о группе " << _Name << endl;
	cout << "Кол-во студентов: " << _Students.size() << endl;
	cout << "Список студентов" << endl;
	
	for (Student &s : _Students)
	{
		cout << s.getNumber() << "\t" << s.getName() << endl;
	}
}
int Group::getStudentsCount()
{
	return _Students.size();
}
void Group::removeStudent(int number)
{
	int studentIndex = -1;
	bool studentFound = false;
		
	for (Student& s : _Students)
	{
		studentIndex++;

		if (s.getNumber() == number)
		{
			studentFound = true;
			break;
		}
	}

	if (studentFound)
	{
		cout << "Студент " << _Students[studentIndex].getName() << " успешно удален и группы" << endl;
		
		_Students.erase(_Students.begin() + studentIndex);
	}		
	else
		cout << "Студент с номером " << number << " не найден!" << endl;
}