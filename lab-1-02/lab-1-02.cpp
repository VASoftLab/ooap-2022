// ����������� ���������
#include <iostream>
#include <iomanip>
#include <fstream>
#include <filesystem>

// ����������� �������� ������
#include "myfunc.h"

// ����������� ������������ ����
using namespace std;
namespace fs = std::filesystem;

int main()
{
    // ��������� ��� �������
    setlocale(LC_ALL, "Russian");

    const fs::path workDir = fs::current_path();
    cout << "������� �����: " << workDir.string() << endl;

    // ������ ������� ������ �� �����
    double X, X0, Xf, dX;

    // �������� ����������,
    // ��������� � �������� ������� �������
    ifstream inpFile;
    fs::path inpFilePath = workDir / "file" / "input.txt";
    cout << "������� ���� ������: " << inpFilePath.string() << endl;

    inpFile.open(inpFilePath.string());

    if (inpFile.is_open()) // ���������, ������ �� ����
    {
        inpFile >> X0; // ������ ��������� �������� ���������
        inpFile >> Xf; // ������ �������� �������� ���������
        inpFile >> dX; // ������ ��� ��������� ���������

        inpFile.close(); // ��������� ����
    }
    else
    {
        // ���� ���� �� ������� ������� -
        // ���������� �������� �� ���������
        X0 = 1;
        Xf = 5;
        dX = 0.1;
    }

    // ������� �������� �������� �����
    ofstream outFile;
    fs::path outFilePath = workDir / "file" / "output.txt";
    outFile.open(outFilePath.string(), ios::trunc);

    cout << "������� �����." << endl;
    auto start = chrono::steady_clock::now();
    
    if (outFile.is_open())
    {
        // ������������� ��������� ��������� ���������
        X = X0;
        while (X < Xf + dX) // ���� ��������� ���������
        {
            outFile << fixed;
            outFile << setprecision(2) << X << "\t";
            outFile << setprecision(4) << getExpX(X) << "\t" << exp(X) << endl;
            X += dX; // ����������� �������� �� �������� ����
        }

        outFile.close(); // ��������� ����
    }
    auto nowTime = chrono::high_resolution_clock().now();      // �����

    // �������� ����� ������� � ������
    auto end = chrono::steady_clock::now();
    auto diff = end - start;

    cout << "������� ��������. ����� �������: " << chrono::duration <double, milli>(diff).count() << " (��)" << endl;
    cout << "���������� �������� � ����: " << outFilePath.string() << endl;
    cout << endl << "������� ����� ������� ��� ����������..." << endl;
}