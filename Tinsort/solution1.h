#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

enum Type {Begin,Point,End};

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
	vector<Line> line = { {0,5},{2,10},{3,12},{1,8} ,{6,15} };
	vector<Event> events;
	vector<int> points = { 1,3,8 };
	vector<int> results(3,0);

	for (Line l : line) {
		events.push_back({ l.start,Begin });
		events.push_back({ l.end,End });
	}

	for (auto p : points) {
		events.push_back({ p,Point });
	}

	sort(events.begin(), events.end(), compare);
	int n = 0, maxN = 0, point_num = 0;
	for (Event e : events) {
		switch (e.type) {
		case Begin:
			n++;
			maxN = max(n, maxN);
			break;
		case Point:
			results[point_num] = n;
			point_num++;
			break;
		case End:
			n--;
			break;
		}
	}
	cout << maxN << endl;
	for (auto r : results) { cout << r << " "; }
}

/*0__________0
*     0________0
*	0_______0
*			0_______0
*/