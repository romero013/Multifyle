// ������������ ������ ������� �++
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

	cout << "������� �����: ";
	cin >> n;
	cout << "������ ����� " << n << " = " << _abs(n) << endl;
	printPI();

	// ������� ��
	/*cout << "������� ��� �����: ";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sumAB(n, m) << endl;*/

	// �������
	/*int arr[10];
	cout << "������� ��� �����: ";
	cin >> n >> m;
	fillArr(arr, 10, n, m);

	cout << "������ arr:\n";
	showArr(arr, 10);*/

	// ���������
	/*person Tom = {"Tom Smith", {10, 10, 1990}};
	showObj(Tom); // ������� ������ ����������
	showObj(Tom.birthday); // �� ������ 10.10.1990*/



	return 0;
}