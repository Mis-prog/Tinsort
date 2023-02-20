#include "Sort.h";

int main() {
	vector<int>a = Random();
	mergeSort(a, 0, 10);
	cout << "\n";
	for (auto i : a) { cout << i << " "; }
}