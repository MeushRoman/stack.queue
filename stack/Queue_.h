#pragma once
#include <vector>
#include <iostream>

using namespace std;

class Queue_
{
	vector<double> arr;

public:

	bool empty() const;
	int size() const;
	double & front();
	const double & front() const;
	double & back();
	const double &back() const;
	void push(const double& val);
	void push(double&& val);
	void pop();

};

