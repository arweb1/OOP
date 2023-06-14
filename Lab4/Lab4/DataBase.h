#pragma once
#define _CRT_SECURE_NO_WARNINGS
//#define N 3
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <iomanip>
using namespace std;

class Provodnik {
	string name;
	char type;
	int square;
	int count;
	friend ostream& operator<<(ostream& stream, Provodnik& o1);
	friend istream& operator>>(istream& stream, Provodnik& o1);
	friend Provodnik operator == (Provodnik& ob1, Provodnik& ob2);
public:
	Provodnik(string* _name, char* _dangerZone, int _movementEl, int _movementDir);
	Provodnik() { name = " ", type = ' '; square = 0; count = 0; }
	Provodnik operator = (Provodnik& o1);
	//int operator [] (Provodnik& o1);
	int operator [] (int i);
	Provodnik operator () (string _name, char _dangerZone, int _moveEl, int _moveDir);
	void PrintAll(void);
	void SetFields(string name, char dangerZone, int movementEl, int movementDir);
	void GetFields(string& name, char& dangerZone, int& movementEl, int& movementDir);
	void Print();
	string ReturnName() { return name; }
	void shapka(void);
	void linebuild(void);
};
void clrscr();
class DataBase {
	string title;
	Provodnik* rows[12];
	int col;
	int sorted;
public:
	DataBase() { col = 0; sorted = 0; }
	~DataBase() { if (col) for (int i = 0; i < col; i++) delete rows[i]; }
	void AddRecord(string* _name, char* _dangerZone, int _moveEl, int _moveDir);
	void DeleteRecord();
	void Sort();
	friend ostream& operator<<(ostream& stream, DataBase& temp);
};
