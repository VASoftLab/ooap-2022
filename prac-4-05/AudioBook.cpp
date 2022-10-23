// AudioBook.cpp
#include "AudioBook.h"
AudioBook::AudioBook()
{
	this->_id = 0;
	this->_author = "";
	this->_name = "";
	this->_rate = 1.0;
	this->_genre = GENRE::Unknown;
	this->_duration = {0};

	cout << ">> ����� AudioBook -- ������ ������������ �� ���������" << endl;
}
AudioBook::AudioBook(int id, string author, string name, double rate, GENRE genre, tm duration)
{
	this->_id = id;
	this->_author = author;
	this->_name = name;
	this->_rate = rate;
	this->_genre = genre;
	this->_duration = duration;

	cout << ">> ����� AudioBook -- ������ ������������ � ����������� (" << this->_id << ")" << endl;
}
AudioBook::AudioBook(const AudioBook& audiobook)
{
	this->_id = audiobook._id;
	this->_author = audiobook._author;
	this->_name = audiobook._name;
	this->_rate = audiobook._rate;
	this->_genre = audiobook._genre;
	this->_duration = audiobook._duration;

	cout << ">> ����� AudioBook -- ������ ������������ ����������� (" << this->_id << ")" << endl;
}
AudioBook::~AudioBook()
{
	cout << ">> ����� AudioBook -- ������ ����������� (" << this->_id << ")" << endl;
}
string AudioBook::GenreToString(GENRE genre)
{
	switch (genre)
	{
	case Unknown:
		return "����������";
		break;
	case Fantasy:
		return "����������";
		break;
	case Novel:
		return "�����";
		break;
	case Classic:
		return "��������";
		break;
	case Detective:
		return "��������";
		break;
	default:
		return "����������";
		break;
	}
}
string AudioBook::getInfo()
{
	stringstream ss; // ������� �����, ���������� �� �������
	ss << _author << " \"" << _name << "\" (" << _rate << ") [" 
		<< _duration.tm_hour << ":" << _duration.tm_min << ":" 
		<< _duration.tm_sec << "] -- " << GenreToString(_genre);
	return ss.str(); // ����������� � ������� ������
}
tm AudioBook::getDuration()
{
	return _duration;
}
