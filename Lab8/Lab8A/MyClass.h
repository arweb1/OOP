#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;

template <class Type1, class Type2>
class MyClass {
	Type1 i;
	Type2 j;
public:
	MyClass(Type1 a, Type2 b) { //С параметрами
		i = a; j = b;
	}
	MyClass() { //По умолчанию
		i = 0; j = ' ';
	}
	void Show() { //Функция печати
		cout << i << ' ' << j << '\n';
	}
	friend MyClass operator + (MyClass& ob1, MyClass& ob2); //Перегрузка оператора +
};