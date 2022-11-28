#include "Exhibit.h"
Exhibit::Exhibit(string museumname, string invenorynumber)
{
	cout << "Exhibit constructor..." << endl;
	_MuseumName = museumname;
	_InvenoryNumber = invenorynumber;
}
void Exhibit::PrintInfo()
{
	cout << "Музей: " << _MuseumName << endl;
	cout << "Инвентарный номер: " << _InvenoryNumber << endl;
}
