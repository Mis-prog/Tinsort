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

