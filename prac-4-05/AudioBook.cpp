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
		return "Неизвестно";
		break;
	case Fantasy:
		return "Фантастика";
		break;
	case Novel:
		return "Роман";
		break;
	case Classic:
		return "Классика";
		break;
	case Detective:
		return "Детектив";
		break;
	default:
		return "Неизвестно";
		break;
	}
}
string AudioBook::getInfo()
{
	stringstream ss; // Создаем поток, свяазанный со строкой
	ss << _author << " \"" << _name << "\" (" << _rate << ") - " << GenreToString(_genre);
	return ss.str(); // Преобразуем в обычную строку
}
tm AudioBook::getDuration()
{
	return _duration;
}
