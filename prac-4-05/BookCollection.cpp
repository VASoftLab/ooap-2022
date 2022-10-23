#include "BookCollection.h"
// BookCollection.cpp
BookCollection::BookCollection()
{
	_id = 0;
	_books.reserve(15); // ����������� ����� ��� �������
	cout << ">> ����� BookCollection -- ������ ������������ �� ���������" << endl;
	cout << ">> ������� �������: " << _books.capacity() << endl;
}
BookCollection::BookCollection(int id, string name, vector<AudioBook> books)
{
	this->_id = id;
	this->_name = name; // �������� ��� ��������
	_books.reserve(books.size() * 3); // ����������� ����� ��� �������
	// �������� ������ ����
	for (AudioBook& book : books)
		this->_books.push_back(book);

	cout << ">> ����� BookCollection -- ������ ������������ � �����������" << endl;
	cout << ">> ������� �������: " << _books.capacity() << endl;
}
BookCollection::BookCollection(const BookCollection& bookcollection)
{
	this->_id = bookcollection._id;
	this->_name = bookcollection._name; // �������� ��� ��������
	_books.reserve(bookcollection._books.size() * 3); // ����������� ����� ��� �������
	
	// �������� ������ ����
	for (AudioBook book : bookcollection._books)
		this->_books.push_back(book);

	cout << ">> ����� BookCollection -- ������ ������������ �����������" << endl;
}
BookCollection::~BookCollection()
{
	cout << ">> ����� BookCollection -- ������ �����������" << endl;
}
void BookCollection::AddBook(AudioBook book)
{
	this->_books.push_back(book);
	cout << ">> ������� �������: " << _books.capacity() << endl;
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
	cout << "�������� ��������: " << _name << endl;
	cout << "����������:" << endl;
	for (int i = 0; i < _books.size(); i++)
		cout << i + 1 << ". " << _books[i].getInfo() << endl;
	chrono::system_clock::time_point duration_time = getTotalDuration();

	/////////////////////////////////////////////////////////////
	// ������ ����� ������������
	// https://en.cppreference.com/w/cpp/chrono/system_clock
	std::time_t time = std::chrono::system_clock::to_time_t(duration_time);
	struct tm* tmp = gmtime(&time);
	cout << "����� ������������: " << tmp->tm_hour + tmp->tm_yday * 24 << " �. " << tmp->tm_min << " ���. " << tmp->tm_sec << " ���." << endl;
	/////////////////////////////////////////////////////////////
	cout << "############################################################" << endl;
	cout << endl;
}