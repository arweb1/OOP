#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define N 3
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <iomanip>
using namespace std;

class Kolkhoz {
	string name;
	float type;
	int square;
	int count;
	friend ostream& operator<<(ostream& stream, Kolkhoz& o1);
	friend istream& operator>>(istream& stream, Kolkhoz& o1);
	//friend Provodnik operator + (Provodnik& ob1, Provodnik& ob2);  
	Kolkhoz operator + (Kolkhoz& ob1) {
		Kolkhoz prov;
		prov.name = name + ob1.name;
		prov.type = type + ob1.type;
		prov.square = square + ob1.square;
		prov.count = count + ob1.count;
		return prov;
	}//?? сделать без friend
	friend Kolkhoz operator == (Kolkhoz& ob1, Kolkhoz& ob2);
	friend Kolkhoz operator + (Kolkhoz& ob1, Kolkhoz& ob2);
public:
	Kolkhoz() { type = 0; square = 0; count = 0; }
	Kolkhoz operator = (Kolkhoz& o1);
	//int operator [] (Provodnik& o1);
	int operator [] (int i);
	Kolkhoz operator () (string _name, float _dangerZone, int _moveEl, int _moveDir);
	void PrintAll(void);
};
void cls();