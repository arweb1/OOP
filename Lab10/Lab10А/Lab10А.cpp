// lab10a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Square.h"


using namespace std;
int main()
{
	setlocale(0, "");
	cout << "Лаб 10 А" << endl;
	int work = 1;
	while (work) {
		int a, b;
		cout << "Программа по расчёту площади квадрата/прямоугольника готова" << endl;
		cout << "Введите значения:";
		cin >> a;
		cin >> b;
		cout << endl;
		cout << "Результат: " << endl;
		Square f;
		f.calcSquare(a, b);




		cout << "Желаете поробовать ещё раз? (да - 1; нет - 0):   ";
		cin >> work;
		/*if (work == 0)
		{
			return;
		}*/cout << endl;
	}


}

