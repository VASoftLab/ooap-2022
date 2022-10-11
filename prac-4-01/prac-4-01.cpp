#include <iostream>
// Подключаем модули библиотеки STL
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    // Определяем вектор целых чисел
    vector<int> data;
    
    // Добавляем в вектор новые элементы
    data.push_back(5); data.push_back(0);
    data.push_back(2); data.push_back(4);
    data.push_back(8); data.push_back(3);    
    data.push_back(7); data.push_back(1);
    data.push_back(6); data.push_back(9);

    // Вывод элементов вектора на печать
    cout << "Элементы вектора до сортировки: \t";
    for (int i = 0; i < data.size(); i++)
        cout << data[i] << " ";
    cout << endl;

    // Сортировка элементов вектора
    sort(data.begin(), data.end());
    cout << "Элементы вектора после сортировки: \t";
    for (int i = 0; i < data.size(); i++)
        cout << data[i] << " ";
    cout << endl << endl;

    // Вставка элемента в 6-ю позицию
    data.insert(data.begin() + 5, 111);
    cout << "Элементы вектора после вставки: \t";
    for (int i = 0; i < data.size(); i++)
        cout << data[i] << " ";
    cout << endl;
    
    // Размер и емкость вектора    
    cout << "Размер / емкость вектора:\t" << data.size()
        << " / " << data.capacity() << endl;
    cout << endl;

    // Удаление элемента из 6-й позиции
    data.erase(data.begin() + 5);
    cout << "Элементы вектора после удаления: \t";
    for (int i = 0; i < data.size(); i++)
        cout << data[i] << " ";
    cout << endl;
    // Размер и емкость вектора    
    cout << "Размер / емкость вектора:\t" << data.size()
        << " / " << data.capacity() << endl;
    cout << endl;
    
    // Очистка вектора    
    cout << "Очистка вектора ..." << endl;
    data.clear();
    // Размер и емкость вектора
    cout << "Размер / емкость вектора:\t" << data.size()
        << " / " << data.capacity() << endl;
}