#include "Structures.h"
#include <iostream>

void showObj(date& D) {
	std::cout << D.day << "." << D.month << "." << D.year << std::endl;
}

void showObj(person& P) {
	std::cout << "Имя: " << P.name << std::endl;
	std::cout << "Дата рождения: ";
	showObj(P.birthday);
	std::cout << "Должность: " << P.position << std::endl;
	std::cout << "Зарплата: " << P.salary << std::endl;
}
