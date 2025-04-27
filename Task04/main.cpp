#include "logic.h"

int main() {
	cout << "The Number of extreme elements.\n";

	int size;
	cout << "Enter size of array: ";
	cin >> size;

	int* arr = new int[size];

	init(arr, size, -20, 20);
	cout << "Array: " << convert(arr, size) << endl;

	cout << "Reversr array: " << get_reverse_array(arr, size) << endl;


	delete[] arr;

	return 0;
}