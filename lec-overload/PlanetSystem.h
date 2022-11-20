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
	PlanetSystem(); // ����������� �� ���������
	PlanetSystem(string name, vector<Planet> planets);
	void PrintInfo();	
};

