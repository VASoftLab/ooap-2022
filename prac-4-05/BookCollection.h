#pragma once
#define _CRT_SECURE_NO_WARNINGS
// BookCollection.h
#include "AudioBook.h"

#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <ctime>
using namespace std;
class BookCollection
{
private:
	// Атрибуты
	int _id;					// ID
	string _name;				// Название сборника
	vector<AudioBook> _books;	// Книги в сборнике
	string* _p;					// Указатель на динамический массив названий
	// Методы
	std::chrono::system_clock::time_point getTotalDuration();
public:
	BookCollection();
	BookCollection(int id, string name, vector<AudioBook> books);
	BookCollection(const BookCollection& bookcollection);
	~BookCollection();
	void AddBook(AudioBook book);
	void setName(string name);
	void PrintInfo();
};