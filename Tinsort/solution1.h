#pragma once
#include <vector>
#include <iostream>

using namespace std;

enum Type {Begin=10,End=1000};

struct Line {
	int start;
	int	end;
};

struct Event {
	int x;
	Type type;
};

void solution1() {
	Type type{ Type::End};
	cout << type;
}