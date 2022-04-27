#include "Functions.h"
#include <ctime>
#include <cstdlib>

int sumAB(int A, int B) {
	return A + B;
}

void fillArr(int arr[], int length, int min, int max) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (max - min) + min;
}
