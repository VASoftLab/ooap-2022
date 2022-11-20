#include <iostream>

#include "Planet.h"
#include "PlanetSystem.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    vector<Planet> planets;
    planets.push_back(Planet("Меркурий", 330, 4878));
    planets.push_back(Planet("Венера", 4869, 12104));
    planets.push_back(Planet("Земля", 5974, 12756));
    planets.push_back(Planet("Марс", 642, 6794));
    planets.push_back(Planet("Юпитер", 1898600, 142800));
    planets.push_back(Planet("Сатурн", 568460, 119900));
    planets.push_back(Planet("Уран", 86832, 51108));
    planets.push_back(Planet("Нептун", 102430, 49493));

    PlanetSystem sunSystem("Солнечная система", planets);
    sunSystem.PrintInfo();

    cout << "Done..." << endl;
}