#pragma once
// AudioBook.h
#include <string>
#include <sstream>
using namespace std;
enum GENRE
{
	Unknown = 0,	// ����������
	Fantasy = 1,	// ����������
	Novel = 2,		// �����
	Classic = 3,	// ��������
	Detective = 4	// ��������
};

class AudioBook
{
private:
	string _author;	// �����
	string _name;	// ��������
	double _rate;	// �������
	GENRE _genre;	// ����
	tm _duration;	// ������������

	string GenreToString(GENRE genre);
public:
	AudioBook();
	AudioBook(string author, string name, double rate, GENRE genre, tm duration);
	string getInfo();
	tm getDuration();
};

