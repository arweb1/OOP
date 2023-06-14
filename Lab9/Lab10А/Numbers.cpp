#include "Numbers.h"

Numbers::Numbers()
{
	value1 = 0;
	value2 = 0;
	sum = value1 + value2;
}

Numbers::Numbers(const int value1, const int value2)
{
	this->value1 = value1;
	this->value2 = value2;
	this->sum = value1 + value2;
}

int Numbers::GetSum()const
{
	return sum;
}

bool operator==(vector<Numbers> v1, vector<Numbers> v2)
{
	return  v1[v1.size() - 1].GetSum() == v2[v2.size() - 1].GetSum();
}

bool operator<(vector<Numbers> v1, vector<Numbers> v2)
{
	return  v1[v1.size() - 1].GetSum() < v2[v2.size() - 1].GetSum();
}

bool operator>(vector<Numbers> v1, vector<Numbers> v2)
{
	return  v1[v1.size() - 1].GetSum() > v2[v2.size() - 1].GetSum();
}
