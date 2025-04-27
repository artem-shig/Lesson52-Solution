#include "logic.h"
#define BUF 50

int main() {
	cout << "The Sum of elements.\n";

	int* arr = new int[BUF] {1, -9, 0, 10, -8, 3, 5, 12, 0, -7, 9};

	int size;
	cout << "Enter size of array: ";
	cin >> size;

	//init(arr, size, -20, 20);
	cout << "Array: " << convert(arr, size) << endl;

	cout << "Sum of elements between first two zero values: "
		<< sum_values_between_first_and_second_elements(arr, size) << endl;

	delete[] arr;

	return 0;
}