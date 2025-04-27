#include "logic.h"

int main() {
	cout << "The Number of extreme elements.\n";

	int size;
	cout << "Enter size of array: ";
	cin >> size;

	double* arr = new double[size] {9.0, -2.4, 0.0, -2.4, 18};

	//init(arr, size, -20, 20);
	cout << "Array: " << convert(arr, size) << endl;

	cout << "Count of extreme elements: "
		<< count_extreme_values(arr, size);

	delete[] arr;

	return 0;
}