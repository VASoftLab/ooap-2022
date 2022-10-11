#include "BookCollection.h"
// BookCollection.cpp
BookCollection::BookCollection()
{

}
BookCollection::BookCollection(string name, vector<AudioBook> books)
{
	this->_name = name; // Копируем имя сборника
	// Копируем вектор книг
	for (AudioBook& book : books)
		this->_books.push_back(book);
}
void BookCollection::AddBook(AudioBook book)
{
	this->_books.push_back(book);
}
tm BookCollection::getTotalDuration()
{
	tm total;
	total.tm_hour = 0;
	total.tm_min = 0;
	total.tm_sec = 0;

	for (AudioBook& b : _books)
	{
		total.tm_hour += b.getDuration().tm_hour;
		total.tm_min += b.getDuration().tm_min;
		total.tm_sec += b.getDuration().tm_sec;		
	}
	mktime(&total);
	return total;
}
void BookCollection::PrintInfo()
{
	cout << "Название сборника: " << _name << endl;
	cout << "Содержание:" << endl;
	for (int i = 0; i < _books.size(); i++)
		cout << i + 1 << ". " << _books[i].getInfo() << endl;
	tm total = getTotalDuration();
	cout << "Общая длительность: " << total.tm_hour << " ч. " << total.tm_min << " мин. " << total.tm_sec << " сек.";
	cout << endl;
}