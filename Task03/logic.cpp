#include "logic.h"

double get_first_max_value(double* arr, int size) {
	double maxValue = arr[0];

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] < arr[i + 1]) {
			maxValue = arr[i + 1];
		}
	}
	return maxValue;
}

double get_first_min_value(double* arr, int size) {
	double minValue = arr[0];

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] > arr[i + 1]) {
			minValue = arr[i + 1];
		}
	}
	return minValue;
}


int count_extreme_values(double* arr, int size) {

	if (size <= 0 || arr == nullptr) {
		return 0;
	}

	int count = 0;
	double firstMaxValue = get_first_max_value(arr, size);
	double firstMinValue = get_first_min_value(arr, size);

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == firstMaxValue || arr[i] == firstMinValue) {
			count++;
		}
	}

	return count;
}
