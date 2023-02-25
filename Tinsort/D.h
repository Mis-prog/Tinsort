#pragma once
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void Sort() {
	int n, N;
	char l, s ='A';
	string line, lines;
	string alphabet = "ABCDEFGHIKLMNOPQRSTVXYZ";
	vector<int> A(23);
	cin >> n;
	for (int i = 0; i < n; i++) { cin >> l; line = line + l; }
	sort(line.begin(), line.end());
	for (int i = 0; i < 23; i++) {
		A[i] = count(line.begin(), line.end(), alphabet[i]);
		if (A[i] % 2 == 0) {
			char a = alphabet[i];
			lines.append(A[i] / 2, a);
		}
		else if (s<alphabet[i]) {
			N = A[i];
			s = alphabet[i];
		}
	}
	lines.append(N, s);
	cout << endl << lines;

}