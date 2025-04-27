#include "logic.h"

int sum_values_between_first_and_second_elements(int* arr, int size) {

	if (size <= 0 || arr == nullptr) {
		return 0;
	}

	int sum = 0;
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0) {
			count++;
			if (count == 2) {
				break;
			}
		}
		else if (count == 1) {
			sum += arr[i];
		}
	}

	if (count < 2) {
		return 0;
	}

	return sum;
}
