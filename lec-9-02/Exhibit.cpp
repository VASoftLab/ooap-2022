#include "Exhibit.h"
Exhibit::Exhibit(string museumname, string invenorynumber)
{
	cout << "Exhibit constructor..." << endl;
	_MuseumName = museumname;
	_InvenoryNumber = invenorynumber;
}
void Exhibit::PrintInfo()
{
	cout << "�����: " << _MuseumName << endl;
	cout << "����������� �����: " << _InvenoryNumber << endl;
}
