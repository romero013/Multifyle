#pragma once
#include <iostream>

struct date {
	int day;
	int month;
	int year;
};

struct person {
	std::string name;
	date birthday;
	std::string position = "programer";
	int salary = 50000;
};

void showObj(date &P);
void showObj(person& P);
