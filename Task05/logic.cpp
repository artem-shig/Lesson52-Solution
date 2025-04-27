#include "logic.h"

int get_last_local_maximum(int* arr, int size) {

	if (size <= 0 && arr == nullptr) {
		return 0;
	}

	int lastLocalMaximum = arr[0];

	for(int i = size - 1; i >= 0; i--)
	{
		if (i == size - 1) {
			if (arr[i] > arr[i - 1]) {
				lastLocalMaximum = arr[i];
				break;
			}
		}
		else if (i < size - 1 && i > 0) {
			if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1]) {
				lastLocalMaximum = arr[i];
				break;
			}
		}
		else if (i == 0) {
			if (arr[i] > arr[i + 1]) {
				lastLocalMaximum = arr[i];
				break;
			}
		}
	}

	return lastLocalMaximum;
}
