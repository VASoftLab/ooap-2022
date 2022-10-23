#pragma once
#define _CRT_SECURE_NO_WARNINGS
// BookCollection.h
#include "AudioBook.h"

#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>
using namespace std;
class BookCollection
{
private:
	int _id;					// ID
	string _name;				// Название сборника
	vector<AudioBook> _books;	// Книги в сборнике

	std::chrono::system_clock::time_point getTotalDuration();
public:
	BookCollection();
	BookCollection(int id, string name, vector<AudioBook> books);
	BookCollection(const BookCollection& bookcollection);
	~BookCollection();
	void AddBook(AudioBook book);
	void PrintInfo();
};

