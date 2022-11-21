#include <iostream>

#include "Planet.h"
#include "PlanetSystem.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    vector<Planet> planets;
    planets.push_back(Planet("��������", 330, 4878));
    planets.push_back(Planet("������", 4869, 12104));
    planets.push_back(Planet("�����", 5974, 12756));
    planets.push_back(Planet("����", 642, 6794));
    planets.push_back(Planet("������", 1898600, 142800));
    planets.push_back(Planet("������", 568460, 119900));
    planets.push_back(Planet("����", 86832, 51108));
    planets.push_back(Planet("������", 102430, 49493));

    PlanetSystem sunSystem("��������� �������", planets);
    sunSystem.PrintInfo();

    cout << "Done..." << endl;

    Planet* pEarth = new Planet("�����", 5974, 12756);
    cout << "������� �����:" << endl;
    cout << pEarth->PrintInfo() << endl;
    
    cout << "������� �����II:" << endl;
    Planet* pEarthII = pEarth;
    cout << pEarthII->PrintInfo() << endl;

    cout << "�������� ������� �����:" << endl;
    delete pEarth;

    cout << "������� �����II:" << endl;    
    cout << pEarthII->PrintInfo() << endl;

    cout << "Done..." << endl;
    delete pEarthII;
}