#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define n 7
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;
class Comp {
public:
	int r;
	int m;
	string result;
	string big_result = "  ";
	void Print();
	void Loger(string result);
	void Write(int x, int y);
	void Read();
	void Loger2();
};
void demo();