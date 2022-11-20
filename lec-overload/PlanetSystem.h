#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Planet.h"

using namespace std;
class PlanetSystem
{
	string _name;
	vector<Planet> _planets;	
public:
	PlanetSystem(); // Конструктор по умолчанию
	PlanetSystem(string name, vector<Planet> planets);
	void PrintInfo();	
};

