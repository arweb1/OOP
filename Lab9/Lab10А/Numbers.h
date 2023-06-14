#pragma once

#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

class Numbers
{
private:
	int value1;
	int value2;
	int sum;
public:
	Numbers();
	Numbers(const int value1, const int value2);
	int GetSum()const;
	friend bool operator==(vector<Numbers> v1, vector<Numbers>v2);
	friend bool operator<(vector<Numbers> v1, vector<Numbers> v2);
	friend bool operator>(vector<Numbers> v1, vector<Numbers> v2);

};

