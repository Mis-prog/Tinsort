#include "Sort.h"

int main() {
	vector<int> a = {2,5,3,2,6,1,8043,4346,2535 };
	a = Sort(a);
	for (auto i : a) {
		cout << i << " ";
	}
}