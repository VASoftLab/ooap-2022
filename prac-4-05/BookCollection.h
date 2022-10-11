#pragma once
// BookCollection.h
#include "AudioBook.h"

#include <iostream>
#include <string>
#include <vector>
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

