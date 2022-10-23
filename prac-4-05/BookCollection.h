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
	string _name;				// �������� ��������
	vector<AudioBook> _books;	// ����� � ��������

	tm getTotalDuration();	
public:
	BookCollection();
	BookCollection(string name, vector<AudioBook> books);
	void AddBook(AudioBook book);
	void PrintInfo();
};

