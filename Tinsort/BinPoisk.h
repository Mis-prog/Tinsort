#pragma once
#include <iostream>

using namespace std;

double Sqrt(int x, double epsilon) {
	if (x < 0) {
		return -1;
	}
	if (x == 0) {
		return 0;
	}
	double l = x > 1 ? 0 : x;
	double r = x > 1 ? x : 1;
	double m = (l + r) / 2;
	while (abs(x - m * m) > epsilon) {
		if ((m * m > x)) {
			r = m;
		}
		else {
			l = m;
		}
		m = (l + r) / 2;
	}
	return m;
}

