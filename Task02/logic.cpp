#include "logic.h"

int get_index_first_zero_value(int* arr, int size) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0) {
			return i;
		}
	}
	
	return -1;
}

int get_index_last_zero_value(int* arr, int size) {

	for (int i = size - 1; i > 0; i--)
	{
		if (arr[i] == 0) {
			return i;
		}
	}

	return -1;
}

int sum_values_between_first_and_second_elements(int* arr, int size) {

	if (size <= 0 || arr == nullptr) {
		return 0;
	}

	int sum = 0;
	int firstZeroValueIndex = get_index_first_zero_value(arr, size);
	int lastZeroValueIndex = get_index_last_zero_value(arr, size);

	if (firstZeroValueIndex > lastZeroValueIndex) {
		int t = lastZeroValueIndex;
		lastZeroValueIndex = firstZeroValueIndex;
		firstZeroValueIndex = t;
	}

	for (int i = firstZeroValueIndex; i < lastZeroValueIndex; i++)
	{
		sum += arr[i];
	}

	return sum;
}
