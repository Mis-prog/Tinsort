#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(string s1, string s2) {
	return ((s1 + s2) < (s2 + s1));
}


int  main() {
	vector<string> line;
	string s;	
	while (cin >> s) { line.push_back(s); }
	sort(line.begin(), line.end(), compare);
	string lineM;
	for (int i = line.size() - 1; i >= 0; i--) {
		lineM = lineM + line[i];
	}
	cout << lineM;
	return 0;
}