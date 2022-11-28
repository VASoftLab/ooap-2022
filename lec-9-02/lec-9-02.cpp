#include <iostream>
#include "ExBook.h"

void main()
{
	setlocale(LC_ALL, "Russian");
	ExBook exbook("Похождения Чичикова или Мертвые души",
		"Н. Гоголь", 1842, 335, "Эрмитаж", "A1234567");

	// Устранение неоднозначности
	cout << endl << "Информация о книге" << endl;
	exbook.Book::PrintInfo();
	exbook.Exhibit::PrintInfo();
}
