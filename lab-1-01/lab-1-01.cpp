// ����������� ���������
#include <iostream>
#include <iomanip>

// ����������� ������������ ����
using namespace std;

int main()
{
    // ��������� ��� �������
    setlocale(LC_ALL, "Russian");
    
    cout << "������ ��������� ��������������" << endl;
    
    double A; // ������� �
    double B; // ������� B
    double Perimeter; // ��������    

    cout << "������� ������� A (��): ";
    cin >> A;
    cout << "������� ������� B (��): ";
    cin >> B;

    // ������ ���������
    Perimeter = (A + B) * 2;

    cout << fixed; // ���������� ������ ������ (2 ����� ����� �������)
    cout << "�������� ��������������: " << setprecision(2) << Perimeter << " (��)";
    cout << endl << "������� ����� ������� ��� ����������..." << endl;
}