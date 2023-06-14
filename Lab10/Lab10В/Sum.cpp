#include <iostream>
#include "Sum.h"
using namespace std;

Sum::Sum()
{
    x = 2;
    y = 2;
}
Sum::Sum(int a, int b)
{
    x = a;
    y = b;
}
void Sum::set(int a, int b)
{
    x = a;
    y = b;
}
void Sum::show()
{
    cout << "Print all ellements and their sum" << endl;
    cout << "X = " << x << endl
        << "Y = " << y << endl
        << "Sum = " << s << endl << endl;
}
int Sum::get_sum()
{
    s = x + y;
    return s;
}