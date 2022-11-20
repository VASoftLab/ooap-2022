#include "PlanetSystem.h"

PlanetSystem::PlanetSystem()
{
	_name = "";	
}
PlanetSystem::PlanetSystem(string name, vector<Planet> planets)
{
	_name = name;
	for (Planet &pln : planets)
		_planets.push_back(pln);
}
void PlanetSystem::PrintInfo()
{
	cout << _name << ":" << endl;

	// ������ ��������� ����� ������
	Planet sumplanet;
	Planet biggestplanet = _planets.at(0);
	// ����� ������ ������ � ������� �����
	for (Planet& pln : _planets)
	{
		cout << pln.PrintInfo() << endl;
		sumplanet = sumplanet + pln;
		if (pln > biggestplanet)
			biggestplanet = pln;
	}

	cout << "��������� ����������: " << sumplanet.PrintInfo() << endl;
	cout << "����� ������� �������: " << biggestplanet.PrintInfo() << endl;
	cout << "����� ������� �������: " << biggestplanet << endl;
}
