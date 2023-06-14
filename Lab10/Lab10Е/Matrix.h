#pragma once
#include <iostream> 
#include <iomanip> 
#define n 4 
using namespace std;

class Matrix {
private:
	//const int n = 4;
	int** arr;
	int min;
	int mas1[n];
	int mas2[n];
	int masmin[n];
public:
	Matrix();
	~Matrix(); 
	void input();
	void show();
	void showcoords();
	void mincoords();
	void fpos(int e1, int e2, int number);
	void getpodmatrix(int pod1, int pod2, int size1, int size2);
};

