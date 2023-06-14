// lab10v.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sum.h"
using namespace std;

int main()
{
    cout << "Default Arguments" << endl;
    Sum obj1;
    Sum obj2;
    obj1.get_sum();
    obj1.show();

    cout << "Parameter Arguments" << endl;
    Sum* var1;
    var1 = &obj1;
    var1->get_sum();
    var1->show();

    cout << "Parameter Arguments" << endl;
    Sum* var2;
    var2 = &obj2;
    var2->set(10, 10);
    var2->get_sum();
    var2->show();

    system("pause");


}