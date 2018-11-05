#include "Queue_.h"

bool Queue_::empty() const
{
	return arr.size() == 0;
}

int Queue_::size() const
{
	return this->arr.size();
}

double & Queue_::front()
{
	return this->arr[0];
}

const double & Queue_::front() const
{
	return this->arr[0];
}

double & Queue_::back()
{
	return this->arr[arr.size()-1];
}

const double & Queue_::back() const
{
	return this->arr[arr.size()-1];
}

void Queue_::push(const double & val)
{
	this->arr.push_back(val);
}

void Queue_::push(double && val)
{
	this->arr.push_back(val);
}

void Queue_::pop()
{
	if (arr.size() > 0)
		this->arr.erase(begin(arr));
}

