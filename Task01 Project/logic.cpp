#include "logic.h"

int count_zero_elements(double* arr, int size) {

	if (size <= 0 || arr == nullptr) {
		return -1;
	}

	int count = 0;
	
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) == 0) {
			count++;
		}
	}

	return count;
}