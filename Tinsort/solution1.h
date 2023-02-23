#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

enum Type {Begin,End};

struct Line {
	int start;
	int	end;
};

struct Event {
	int x;
	Type type;
};

bool compare(Event e1,Event e2) {
	return e1.x < e2.x || (e1.x == e2.x && e1.type < e2.type);
}

void solution1() {
	vector<Line> line = { {0,5},{0,10},{3,12},{1,8} ,{6,15} };
	vector<Event> events;

	for (Line l : line) {
		events.push_back({ l.start,Begin });
		events.push_back({ l.end,End });
	}
	sort(events.begin(), events.end(), compare);
	int n = 0, maxN = 0;
	for (Event e : events) {
		if (e.type == Begin) {
			n++;
			maxN = max(n, maxN);
		}
		else {
			n--;
		}
	}
	cout << maxN;
}

/*0__________0
*     0________0
*	0_______0
*			0_______0
*/