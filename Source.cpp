// Персональный шаблон проекта С++
#include <iostream>
#include "Functions.h"
#include "Structures.h"
#include "Data.h"
using namespace std;



int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	cout << "Pi = " << _PI << endl;
	cout << "E = " << _E << endl;

	cout << "Введите число: ";
	cin >> n;
	cout << "Модуль числа " << n << " = " << _abs(n) << endl;
	printPI();

	// Функция АВ
	/*cout << "Введите два числа: ";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sumAB(n, m) << endl;*/

	// Массивы
	/*int arr[10];
	cout << "Введите два числа: ";
	cin >> n >> m;
	fillArr(arr, 10, n, m);

	cout << "Массив arr:\n";
	showArr(arr, 10);*/

	// Структуры
	/*person Tom = {"Tom Smith", {10, 10, 1990}};
	showObj(Tom); // выводит полную информацию
	showObj(Tom.birthday); // на экране 10.10.1990*/



	return 0;
}