#pragma once
#include <vector>
#include <algorithm>
using namespace std;

class PriorityQueue_
{
	vector<pair<string, int>> arr;
	
public:
	bool empty() const { return arr.size() == 0; }
	int size() const { return arr.size(); }

	void push(string str, int priority);

	pair<string, int> & front();
	const pair<string, int> & front() const;

	pair<string, int> & back();
	const pair<string, int> & back() const;

	void pop();
	
};

