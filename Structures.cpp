#include "Structures.h"
#include <iostream>

void showObj(date& D) {
	std::cout << D.day << "." << D.month << "." << D.year << std::endl;
}

void showObj(person& P) {
	std::cout << "���: " << P.name << std::endl;
	std::cout << "���� ��������: ";
	showObj(P.birthday);
	std::cout << "���������: " << P.position << std::endl;
	std::cout << "��������: " << P.salary << std::endl;
}
