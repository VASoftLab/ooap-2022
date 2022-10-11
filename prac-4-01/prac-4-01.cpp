#include <iostream>
// ���������� ������ ���������� STL
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    // ���������� ������ ����� �����
    vector<int> data;
    
    // ��������� � ������ ����� ��������
    data.push_back(5); data.push_back(0);
    data.push_back(2); data.push_back(4);
    data.push_back(8); data.push_back(3);    
    data.push_back(7); data.push_back(1);
    data.push_back(6); data.push_back(9);

    // ����� ��������� ������� �� ������
    cout << "�������� ������� �� ����������: \t";
    for (int i = 0; i < data.size(); i++)
        cout << data[i] << " ";
    cout << endl;

    // ���������� ��������� �������
    sort(data.begin(), data.end());
    cout << "�������� ������� ����� ����������: \t";
    for (int i = 0; i < data.size(); i++)
        cout << data[i] << " ";
    cout << endl << endl;

    // ������� �������� � 6-� �������
    data.insert(data.begin() + 5, 111);
    cout << "�������� ������� ����� �������: \t";
    for (int i = 0; i < data.size(); i++)
        cout << data[i] << " ";
    cout << endl;
    
    // ������ � ������� �������    
    cout << "������ / ������� �������:\t" << data.size()
        << " / " << data.capacity() << endl;
    cout << endl;

    // �������� �������� �� 6-� �������
    data.erase(data.begin() + 5);
    cout << "�������� ������� ����� ��������: \t";
    for (int i = 0; i < data.size(); i++)
        cout << data[i] << " ";
    cout << endl;
    // ������ � ������� �������    
    cout << "������ / ������� �������:\t" << data.size()
        << " / " << data.capacity() << endl;
    cout << endl;
    
    // ������� �������    
    cout << "������� ������� ..." << endl;
    data.clear();
    // ������ � ������� �������
    cout << "������ / ������� �������:\t" << data.size()
        << " / " << data.capacity() << endl;
}