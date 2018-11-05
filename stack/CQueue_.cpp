#include "CQueue_.h"

bool CQueue_::empty() const
{
	return arr.size() == 0;
}

int CQueue_::size() const
{
	return this->arr.size();
}

double & CQueue_::front()
{
	return this->arr[0];
}

const double & CQueue_::front() const
{
	return this->arr[0];
}

double & CQueue_::back()
{
	return this->arr[arr.size() - 1];
}

const double & CQueue_::back() const
{
	return this->arr[arr.size() - 1];
}

void CQueue_::push(const double & val)
{
	this->arr.push_back(val);
}

void CQueue_::push(double && val)
{
	this->arr.push_back(val);
}

void CQueue_::pop(bool toEnd = false)
{
	if (toEnd) {
		arr.push_back(move(arr[0]));
	}

	this->arr.erase(begin(arr));
}

