#pragma once
#include <iostream>
#include <vector>

using namespace std;

static int n = 0;
void Sort(vector<int>&a,size_t start,size_t end) {
	if ((end - start) < 2) {
		return;
	}
	if ((end - start) == 2) {
		if (a[start] > a[start + 1]) {
			swap(a[start], a[start + 1]);
			n++;
		}
		return;
	}
	Sort(a, start, start + (end + start) / 2);
	Sort(a, start + (end - start) / 2, end);
	Merge(a, start, end);
}

void Merge(vector<int>& a, size_t start, size_t end) {
	vector<int> b;
	int s1 = start, e1 = start + (end - start) / 2, s2 = e1;
	while (b.size() < end-start) {
		if ()
	}
}