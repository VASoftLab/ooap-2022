// AudioBook.cpp
#include "AudioBook.h"
AudioBook::AudioBook()
{
}
AudioBook::AudioBook(string author, string name, double rate, GENRE genre, tm duration)
{
	this->_author = author;
	this->_name = name;
	this->_rate = rate;
	this->_genre = genre;
	this->_duration = duration;
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
	ss << _author << " \"" << _name << "\" (" << _rate << ") - " << GenreToString(_genre);
	return ss.str(); // ����������� � ������� ������
}
tm AudioBook::getDuration()
{
	return _duration;
}
