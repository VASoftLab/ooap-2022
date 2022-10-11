#pragma once
// AudioBook.h
#include <string>
#include <sstream>
using namespace std;
enum GENRE
{
	Unknown = 0,	// Неизвестно
	Fantasy = 1,	// Фантастика
	Novel = 2,		// Роман
	Classic = 3,	// Классика
	Detective = 4	// Детектив
};

class AudioBook
{
private:
	string _author;	// Автор
	string _name;	// Название
	double _rate;	// Райтинг
	GENRE _genre;	// Жанр
	tm _duration;	// Длительность

	string GenreToString(GENRE genre);
public:
	AudioBook();
	AudioBook(string author, string name, double rate, GENRE genre, tm duration);
	string getInfo();
	tm getDuration();
};

