#pragma once 
#include <iostream> 
using namespace std;
class Swap {
private:
	int* a0, * b0, * c0;
	int a1, b1, c1;
public:
	Swap(int* a, int* b, int* c);
	Swap(int& a, int& b, int& c);
	int getA();
	int getB();
	int getC();
	void point();
	void ref();
};
