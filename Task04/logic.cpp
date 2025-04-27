#include "logic.h"

string get_reverse_array(int* arr, int size) {

	if (size <= 0 || arr == nullptr) {
		return "Error...";
	}

	string arrReverse = "";

	for (int i = 0; i < size; i++)
	{
		arrReverse = to_string(arr[i]) + " "  + arrReverse;
	}

	return arrReverse;
}
