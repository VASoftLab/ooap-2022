// Подключение библиотек
#include <iostream>
#include <iomanip>
#include <fstream>
#include <filesystem>

// Подключение внешнего модуля
#include "myfunc.h"

// Подключение пространства имен
using namespace std;
namespace fs = std::filesystem;

int main()
{
    // Кириллица для консоли
    setlocale(LC_ALL, "Russian");

    const fs::path workDir = fs::current_path();
    cout << "Текущая папка: " << workDir.string() << endl;

    // Читаем входные данные из файла
    double X, X0, Xf, dX;

    // Файловая переменная,
    // связанная с файловым входным потоком
    ifstream inpFile;
    fs::path inpFilePath = workDir / "file" / "input.txt";
    cout << "Входной файл данных: " << inpFilePath.string() << endl;

    inpFile.open(inpFilePath.string());

    if (inpFile.is_open()) // Проверяем, открыт ли файл
    {
        inpFile >> X0; // Читаем начальное значение аргумента
        inpFile >> Xf; // Читаем конечное значение аргумента
        inpFile >> dX; // Читаем шаг изменения аргумента

        inpFile.close(); // Закрываем файл
    }
    else
    {
        // Если файл не удалось открыть -
        // используем значения по умолчанию
        X0 = 1;
        Xf = 5;
        dX = 0.1;
    }

    // Создаем выходной файловый поток
    ofstream outFile;
    fs::path outFilePath = workDir / "file" / "output.txt";
    outFile.open(outFilePath.string(), ios::trunc);

    cout << "Рассчет начат." << endl;
    auto start = chrono::steady_clock::now();
    
    if (outFile.is_open())
    {
        // Инициализация аргумента начальным значением
        X = X0;
        while (X < Xf + dX) // Цикл изменения аргумента
        {
            outFile << fixed;
            outFile << setprecision(2) << X << "\t";
            outFile << setprecision(4) << getExpX(X) << "\t" << exp(X) << endl;
            X += dX; // Увеличиваем аргумент на величину шага
        }

        outFile.close(); // Закрываем файл
    }
    auto nowTime = chrono::high_resolution_clock().now();      // Конец

    // Интервал между началом и концом
    auto end = chrono::steady_clock::now();
    auto diff = end - start;

    cout << "Рассчет закончен. Время расчета: " << chrono::duration <double, milli>(diff).count() << " (мс)" << endl;
    cout << "Результаты записаны в файл: " << outFilePath.string() << endl;
    cout << endl << "Нажмите любую клавишу для завершения..." << endl;
}