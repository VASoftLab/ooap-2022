#include <iostream>
#include <vector>
#include "AudioBook.h"
#include "BookCollection.h"
int main()
{
    setlocale(LC_ALL, "Russian");
    tm duration1; tm duration2;
    tm duration3; tm duration4;
    
    duration1.tm_hour = 10; duration1.tm_min = 18; duration1.tm_sec = 17;
    AudioBook book1("Майк Омер", "Внутри убийцы", 4.5, GENRE::Detective, duration1);

    duration2.tm_hour = 16; duration2.tm_min = 53; duration2.tm_sec = 18;
    AudioBook book2("Михаил Булгаков", "Мастер и Маргарита", 4.9, GENRE::Novel, duration2);

    duration3.tm_hour = 12; duration3.tm_min = 45; duration3.tm_sec = 20;
    AudioBook book3("Харпер Ли", "Убить пересмешника", 4.8, GENRE::Classic, duration3);

    duration4.tm_hour = 19; duration4.tm_min = 49; duration4.tm_sec = 44;
    AudioBook book4("Дмитрий Глуховский", "Метро 2033", 4.7, GENRE::Fantasy, duration4);

    vector<AudioBook> collectiion;
    collectiion.push_back(book1);
    collectiion.push_back(book2);
    collectiion.push_back(book3);
    collectiion.push_back(book4);

    BookCollection theBest2022("The Best 2022", collectiion);
    theBest2022.PrintInfo();
}