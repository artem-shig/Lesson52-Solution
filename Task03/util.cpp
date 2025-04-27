#include "util.h"

void init(double* arr, int size, int a, int b) {

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (b - a + 1) + a;
	}
}

string convert(double* arr, int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(arr[i]) + " ";
	}

	return s;
}