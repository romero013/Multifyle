#pragma once

#include <iostream>

int sumAB(int A, int B);

void fillArr(int arr[], int length, int min, int max);

// ���� ��������� ������� �������� ����� ��
// ������������ ��� std ������������ ������ �������� �� ������� ����� �������
// ����� �� ������������� ������� std::
template <typename T> void showArr(T arr[], int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
