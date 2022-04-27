#include <iostream>
#include <algorithm>
#include <ctime>

int max(int* arr, size_t size) {
	if (size == 1)
		return *arr;
	const size_t count = size / 2;
	return std::max(max(arr, count), max(arr + count, size - count));
}

int main() {
	const size_t n = 10;
	int arr[n];
	srand((unsigned)time(nullptr));

	for (int& item : arr) {
		item = rand() % 21;
		std::cout << item << ' ';
	}

	std::cout << '\n' << max(arr, n) << '\n';
	return 0;
}