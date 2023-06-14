// Lab10Г.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Timer.h"
using namespace std;

int main()
{
	setlocale(0, "");
	int a0, b0;
	cout << "Введите количество минут: "; 
	cin >> a0;
	cout << "Введите количество секунд: "; 
	cin >> b0;
	Timer sec(b0, a0);
	Timer sec2(&sec);
	sec.get();
	sec.set(20);
	sec2.get();


	system("pause");
}
