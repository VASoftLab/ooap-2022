#include "BookCollection.h"
// BookCollection.cpp
BookCollection::BookCollection()
{
	_id = 0;
	_books.reserve(15); // Резервируем место для вектора
	cout << ">> Класс BookCollection -- Работа конструктора по умолчанию" << endl;
	cout << ">> Емкость вектора: " << _books.capacity() << endl;
}
BookCollection::BookCollection(int id, string name, vector<AudioBook> books)
{
	this->_id = id;
	this->_name = name; // Копируем имя сборника
	_books.reserve(books.size() * 3); // Резервируем место для вектора
	// Копируем вектор книг
	for (AudioBook& book : books)
		this->_books.push_back(book);

	cout << ">> Класс BookCollection -- Работа конструктора с параметрами" << endl;
	cout << ">> Емкость вектора: " << _books.capacity() << endl;
}
BookCollection::BookCollection(const BookCollection& bookcollection)
{
	this->_id = bookcollection._id;
	this->_name = bookcollection._name; // Копируем имя сборника
	_books.reserve(bookcollection._books.size() * 3); // Резервируем место для вектора
	
	// Копируем вектор книг
	for (AudioBook book : bookcollection._books)
		this->_books.push_back(book);

	cout << ">> Класс BookCollection -- Работа конструктора копирования" << endl;
}
BookCollection::~BookCollection()
{
	cout << ">> Класс BookCollection -- Работа деструктора" << endl;
}
void BookCollection::AddBook(AudioBook book)
{
	this->_books.push_back(book);
	cout << ">> Емкость вектора: " << _books.capacity() << endl;
}
chrono::system_clock::time_point BookCollection::getTotalDuration()
{
	chrono::system_clock::time_point duration_time;
	for (AudioBook& b : _books)
	{
		duration_time += std::chrono::hours(b.getDuration().tm_hour);
		duration_time += std::chrono::minutes(b.getDuration().tm_min);
		duration_time += std::chrono::seconds(b.getDuration().tm_sec);
	}
	return duration_time;
}
void BookCollection::PrintInfo()
{
	cout << "############################################################" << endl;
	cout << "Название сборника: " << _name << endl;
	cout << "СОДЕРЖАНИЕ:" << endl;
	for (int i = 0; i < _books.size(); i++)
		cout << i + 1 << ". " << _books[i].getInfo() << endl;
	chrono::system_clock::time_point duration_time = getTotalDuration();

	/////////////////////////////////////////////////////////////
	// Расчет общей длительности
	// https://en.cppreference.com/w/cpp/chrono/system_clock
	std::time_t time = std::chrono::system_clock::to_time_t(duration_time);
	struct tm* tmp = gmtime(&time);
	cout << "Общая длительность: " << tmp->tm_hour + tmp->tm_yday * 24 << " ч. " << tmp->tm_min << " мин. " << tmp->tm_sec << " сек." << endl;
	/////////////////////////////////////////////////////////////
	cout << "############################################################" << endl;
	cout << endl;
}