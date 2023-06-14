// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "ToManyClasses.h"

int main()
{
    setlocale(0, "");
    D3 temp(100, 200, 300, 400, 500, 600);
    cout << "D3 temp(100, 200, 300, 400, 500, 600);" << endl;
    cout << endl;
    cout << "—леду€ иерархии класса D3: " << endl;
    temp.show_D3();
}