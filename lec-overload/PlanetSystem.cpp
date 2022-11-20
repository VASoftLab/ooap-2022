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

	// Расчет суммарной массы планет
	Planet sumplanet;
	Planet biggestplanet = _planets.at(0);
	// Вывод списка планет и подсчет суммы
	for (Planet& pln : _planets)
	{
		cout << pln.PrintInfo() << endl;
		sumplanet = sumplanet + pln;
		if (pln > biggestplanet)
			biggestplanet = pln;
	}

	cout << "Суммарная информация: " << sumplanet.PrintInfo() << endl;
	cout << "Самая большая планета: " << biggestplanet.PrintInfo() << endl;
	cout << "Самая большая планета: " << biggestplanet << endl;
}
