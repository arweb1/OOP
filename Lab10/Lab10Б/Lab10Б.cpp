// Lab10Б.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Swap.h"
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Лаб 10 Б" << endl;

    int a, b, c;
    cout << "Введите 3 числа:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    Swap ch1(&a, &b, &c);
    Swap ch2(a, b, c);
    cout << "Ваши значения: " << a << " " << b << " " << c << endl;
    cout << endl;
    cout << "Указатели: ";
    ch1.point();
    cout << a << " " << b << " " << c << endl;
    cout << endl;

    cout << "Ссылки: ";
    ch2.ref();
    cout << ch2.getA() << " " << ch2.getB() << " " << ch2.getC() << endl;
    cout << endl;


	







	system("pause");
}
