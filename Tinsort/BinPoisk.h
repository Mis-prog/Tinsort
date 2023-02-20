#pragma once
double seach(int x, int epsilon) {
	if (x < 0) {
		return;
	}
	if (x == 0) {
		return 0;
	}
	double l = x > 1 ? 0 : x;
	double r = x > 1 ? x : 1;
	double m = (l + r) / 2;
	while ((x - m * m) > epsilon) {
		if ((x - m * m) > m) {
			l = m;
		}
		else {
			r = m;
		}
		m = (r + l) / 2;
	}
	return m;
}