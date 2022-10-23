#pragma once
// AudioBook.h
#include <string>
#include <iostream>
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
	int _id;		// ID
	string _author;	// Автор
	string _name;	// Название
	double _rate;	// Райтинг
	GENRE _genre;	// Жанр
	tm _duration;	// Длительность

	string GenreToString(GENRE genre);
public:
	AudioBook();
	AudioBook(int id, string author, string name, double rate, GENRE genre, tm duration);
	AudioBook(const AudioBook& audiobook);
	~AudioBook();
	string getName();
	string getInfo();
	tm getDuration();
};

