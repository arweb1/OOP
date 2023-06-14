#include "Swap.h"

Swap::Swap(int* a, int* b, int* c) {
	a0 = a;
	b0 = b;
	c0 = c;
}
Swap::Swap(int& a, int& b, int& c) {
	a1 = a;
	b1 = b;
	c1 = c;
}
int Swap::getA() { return a1; }
int Swap::getB() { return b1; }
int Swap::getC() { return c1; }
void Swap::point() {
	int* min = NULL;
	int* max = NULL;

	if (*a0 < *b0 && *a0 < *c0)
		min = a0;
	else if (*b0 < *a0 && *b0 < *c0)
		min = b0;
	else if (*c0 < *a0 && *c0 < *b0)
		min = c0;
	if (*a0 > *b0 && *a0 > *c0)
		max = a0;
	else if (*b0 > *a0 && *b0 > *c0)
		max = b0;
	else if (*c0 > *a0 && *c0 > *b0)
		max = c0;
	int temp = *min;
	*min = *max;
	*max = temp;
}
void Swap::ref() {
	int* min = NULL;
	int* max = NULL;
	if (a1 < b1 && a1 < c1)
		min = &a1;
	else if (b1 < a1 && b1 < c1)
		min = &b1;
	else if (c1 < a1 && c1 < b1)
		min = &c1;
	if (a1 > b1 && a1 > c1)
		max = &a1;
	else if (b1 > a1 && b1 > c1)
		max = &b1;
	else if (c1 > a1 && c1 > b1)
		max = &c1;
	int temp = *min;
	*min = *max;
	*max = temp;
}