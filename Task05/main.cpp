#include "logic.h"

int main() {
	cout << "The Last local maxima.\n";

	int size;
	cout << "Enter size of array: ";
	cin >> size;

	int* arr = new int[size];

	init(arr, size, -20, 20);
	cout << "Array: " << convert(arr, size) << endl;

	cout << "Last extreme maximum: " << get_last_local_maximum(arr, size) << endl;

	delete[] arr;

	return 0;
}