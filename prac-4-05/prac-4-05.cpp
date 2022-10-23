#include <iostream>
#include <vector>
#include "AudioBook.h"
#include "BookCollection.h"
int main()
{
    setlocale(LC_ALL, "Russian");
    tm duration1, duration2, duration3, duration4;
    
    cout << "Создаем экземпляр класса AudioBook book1" << endl;
    duration1.tm_hour = 10; duration1.tm_min = 18; duration1.tm_sec = 17;
    AudioBook *book1 = new AudioBook(1, "Майк Омер", "Внутри убийцы", 4.5, GENRE::Detective, duration1);
    cout << endl;

    cout << "Создаем экземпляр класса AudioBook book2" << endl;
    duration2.tm_hour = 16; duration2.tm_min = 53; duration2.tm_sec = 18;
    AudioBook* book2 = new AudioBook(2, "Михаил Булгаков", "Мастер и Маргарита", 4.9, GENRE::Novel, duration2);
    cout << endl;

    cout << "Создаем экземпляр класса AudioBook book3" << endl;
    duration3.tm_hour = 12; duration3.tm_min = 45; duration3.tm_sec = 20;
    AudioBook* book3 = new AudioBook(3, "Харпер Ли", "Убить пересмешника", 4.8, GENRE::Classic, duration3);
    cout << endl;

    cout << "Создаем экземпляр класса AudioBook book4" << endl;
    duration4.tm_hour = 19; duration4.tm_min = 49; duration4.tm_sec = 44;
    AudioBook* book4 = new AudioBook(4, "Дмитрий Глуховский", "Метро 2033", 4.7, GENRE::Fantasy, duration4);
    cout << endl;

    // Заполняем коллекцию (временный вектор)
    vector<AudioBook> collectiion;
    
    cout << "Добавляем book1 в вектор" << endl;
    collectiion.push_back(*book1);
    cout << endl;

    cout << "Добавляем book2 в вектор" << endl;
    collectiion.push_back(*book2);
    cout << endl;

    cout << "Добавляем book3 в вектор" << endl;
    collectiion.push_back(*book3);
    cout << endl;

    cout << "Добавляем book4 в вектор" << endl;
    collectiion.push_back(*book4);
    cout << endl;

    cout << "Создаем экземпляр класса BookCollection bookCol1" << endl;
    BookCollection bookCol1(1, "The Best 2022", collectiion);
    cout << endl;
    bookCol1.PrintInfo();
}