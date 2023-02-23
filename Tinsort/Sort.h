#pragma once
#include <vector>
#include <iostream>
using namespace std;

vector<int>& Sortn2(vector<int>&a) {
	for (int j = 0; j < a.size(); j++) {
		for (int i = 0; i < a.size() - j- 1; i++) {
			if (a[i + 1] < a[i]) {
				int b = a[i + 1];
				a[i + 1] = a[i];
				a[i] = b;
			}
		}
	}
	return a;
}

vector<int> Random() {
	vector<int> a;
	for (int i = 0; i < 10; i++) {
		a.push_back(i);
	}
	for (size_t i = 0; i < a.size(); i++) {
		swap(a[i], a[rand() % (a.size() - i) + i]);
	}
	for (auto i : a) {
		cout << i << " ";
	}
	return a;
}


void mergeSort(vector<int>& a, size_t start, size_t end) {
	if ((end - start) < 2)
		return;
	if ((end - start) == 2) {
		if (a[start] > a[start+1]) {
			swap(a[start], a[start + 1]);
		}
		return;
	}
	mergeSort(a, start, start + (end - start) / 2);
	mergeSort(a,start + (end - start) / 2, end);
	vector<int> b;
	size_t b1 = start, e1 =( start + (end - start) / 2), b2 = e1;
	while (b.size() < end - start) {
		if (b1 >= e1 || (b2 < end && a[b2] <= a[b1])) {
			b.push_back(a[b2]);
			++b2;
		}
		else {
			b.push_back(a[b1]);
			++b1;
		}
	}
	for (size_t i = start; i < end; i++) {
		a[i] = b[i - start];
	}
}
