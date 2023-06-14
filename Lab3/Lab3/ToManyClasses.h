#pragma once

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;



class B1
{
private:
	int a;

public:
	B1() {};
	B1(int x) { a = x; }

	void show_B1() {
		cout << "B1 = " << a << endl;
	}

};

class B2
{
private:
	int b;

public:
	B2() {};
	B2(int x) { b = x; }

	void show_B2() {
		cout << "B2 = " << b << endl;
	}

};

class D1 : public B1, private B2
{
private:
	int c;

public:

	D1(int x, int y, int z) : B1(y), B2(z) { c = x; };

	void show_D1() {
		cout << "D1 = " << c << endl;
		show_B1();
		show_B2();
	}

};

class D2 : private D1
{
private:
	int d;

public:

	D2(int x, int y, int z, int i) : D1(y,z,i) { d = x; };

	void show_D2() {
		cout << "D2 = " << d << endl;
		show_D1();
	}

};

class B3
{
private:
	int e;

public:

	B3() {};
	B3(int x) { e = x; }

	void show_B3() {
		cout << "B3 = " << e << endl;
	}

};

class D3 : public D2, private B3
{
private:
	int f;

public:

	D3(int x, int y, int z, int i, int j, int k) : D2(y, z, i, j), B3(k) { f = x; };

	void show_D3() {
		cout << "D3 = " << f << endl;
		show_D2();
		show_B3();
	}

};