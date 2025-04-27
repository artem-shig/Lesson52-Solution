#include "logic.h"

int main() {
	cout << "The Number of zero elements.\n";

	int size;

	do {
		cout << "Enter size of array: ";
		cin >> size;
	} while (size <= 0);

	double* arr = new double[size];

	cout << "Enter elements of array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> *(arr + i);
	}

	int count = count_zero_elements(arr, size);
	string s = (count == -1 ? "Error..."
		: "Count of zero elements is " + to_string(count));

	cout << s << endl;

	delete[] arr;

	return 0;
}