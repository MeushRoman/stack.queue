#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Stack_
{
	vector<double> arr;
	int maxSize;

public:
	Stack_(int maxSize);
	bool empty() const;
	int size() const;
	double & top();
	const double & top() const;
	void push(const double& val);
	void push(double&& val);
	void pop();	
};

