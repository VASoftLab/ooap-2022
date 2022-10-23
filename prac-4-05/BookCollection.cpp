#include "BookCollection.h"
// BookCollection.cpp
BookCollection::BookCollection()
{
	_id = 0;
	_books.reserve(15); // ����������� ����� ��� �������
	_p = NULL; // ������ �������������
	cout << ">> ����� BookCollection -- ������ ������������ �� ���������" << endl;
	cout << ">> ������� �������: " << _books.capacity() << endl;
}
BookCollection::BookCollection(int id, string name, vector<AudioBook> books)
{
	this->_id = id;
	this->_name = name; // �������� ��� ��������
	
	_p = new string[books.size()];
	
	// �������� ������ � ������ ����
	int index = 0;
	for (AudioBook& book : books)
	{
		this->_books.push_back(book); // ��������� ����� � ������
		_p[index] = book.getName(); // ��������� �������� � ������
		index++; // ��������� �������
	}	

	cout << ">> ����� BookCollection -- ������ ������������ � �����������" << endl;
	cout << ">> ������� �������: " << _books.capacity() << endl;
	cout << ">> ������ �������: " << _books.size() << endl;
}
BookCollection::BookCollection(const BookCollection& bookcollection)
{
	this->_id = bookcollection._id;
	this->_name = bookcollection._name; // �������� ��� ��������
	_books.reserve(bookcollection._books.size() * 3); // ����������� ����� ��� �������
	

	// ����������� ������� ��������
	if (_p != NULL)
		delete[] _p; // ���� ������ ��� �������� - ������� ��

	_p = new string[bookcollection._books.size()];

	int index = 0;
	// �������� ������ ����
	for (AudioBook book : bookcollection._books)
	{
		this->_books.push_back(book);
		//_p[index] = book.getName(); // ������ ������� �������
		_p[index] = _books.at(index).getName(); // ������ ������� �������
		index++;
	}			
 
	cout << ">> ����� BookCollection -- ������ ������������ �����������" << endl;
}
BookCollection::~BookCollection()
{
	if (_p != NULL)
		delete[] _p; // ������� ������, ���������� ��� ������ ����� (��������)
	
	cout << ">> ����� BookCollection -- ������ �����������" << endl;
}
void BookCollection::AddBook(AudioBook book)
{
	this->_books.push_back(book);

	// �������������� ������ ��������
	if (_p != NULL)
		delete[] _p;

	_p = new string[_books.size()];
	int index = 0;
	for (AudioBook& book : this->_books)
	{
		_p[index] = book.getName();
		index++;
	}

	cout << ">> ������� �������: " << _books.capacity() << endl;
	cout << ">> ������ �������: " << _books.size() << endl;
}
void BookCollection::setName(string name)
{
	if (name.length() > 0)
		_name = name;
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

	cout << ">> ������� �������: " << _books.capacity() << endl;
	cout << ">> ������ �������: " << _books.size() << endl;
}