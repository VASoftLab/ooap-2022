#include <iostream>
#include <vector>
#include "AudioBook.h"
#include "BookCollection.h"
int main()
{
    setlocale(LC_ALL, "Russian");
    tm duration1, duration2, duration3, duration4;
    
    cout << "������� ��������� ������ AudioBook book1" << endl;
    duration1.tm_hour = 10; duration1.tm_min = 18; duration1.tm_sec = 17;
    AudioBook *book1 = new AudioBook(1, "���� ����", "������ ������", 4.5, GENRE::Detective, duration1);
    cout << endl;

    cout << "������� ��������� ������ AudioBook book2" << endl;
    duration2.tm_hour = 16; duration2.tm_min = 53; duration2.tm_sec = 18;
    AudioBook* book2 = new AudioBook(2, "������ ��������", "������ � ���������", 4.9, GENRE::Novel, duration2);
    cout << endl;

    cout << "������� ��������� ������ AudioBook book3" << endl;
    duration3.tm_hour = 12; duration3.tm_min = 45; duration3.tm_sec = 20;
    AudioBook* book3 = new AudioBook(3, "������ ��", "����� ������������", 4.8, GENRE::Classic, duration3);
    cout << endl;

    cout << "������� ��������� ������ AudioBook book4" << endl;
    duration4.tm_hour = 19; duration4.tm_min = 49; duration4.tm_sec = 44;
    AudioBook* book4 = new AudioBook(4, "������� ����������", "����� 2033", 4.7, GENRE::Fantasy, duration4);
    cout << endl;

    // ��������� ��������� (��������� ������)
    vector<AudioBook> collectiion;
    
    cout << "��������� book1 � ������" << endl;
    collectiion.push_back(*book1);
    cout << endl;

    cout << "��������� book2 � ������" << endl;
    collectiion.push_back(*book2);
    cout << endl;

    cout << "��������� book3 � ������" << endl;
    collectiion.push_back(*book3);
    cout << endl;

    cout << "��������� book4 � ������" << endl;
    collectiion.push_back(*book4);
    cout << endl;

    cout << "������� ��������� ������ BookCollection bookCol1" << endl;
    BookCollection bookCol1(1, "The Best 2022", collectiion);
    cout << endl;
    bookCol1.PrintInfo();
}