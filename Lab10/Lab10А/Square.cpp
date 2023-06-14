#include "Square.h"
#include <iostream>
using namespace std;



//Square::Square() {
//	x = 10;
//	y = 10;
//}
//
//Square::Square(int a, int b) {
//	x = a;
//	y = b;
//}



void Square::calcSquare(int x =5, int y= 5) {
	//Square(a, b);
	if (x>0 && y >0)
	{
		cout << "x = " << x << "; y = " << y << endl;
		cout << "S прямоугольника = " << x * y << endl;
	}
	else if (x > 0)
	{
		cout << "x = " << x << endl;
		cout << "S квадрата = " << x * x << endl;
	}
	else if (y > 0)
	{
		cout << "y = " << y << endl;
		cout << "S квадрата = " << y * y << endl;
	}
	else 
	{
		x = 5; y = 5;
		cout << "x = " << x << "; y = " << y << endl;
		cout << "S прямоугольника = " << x * y << endl;
	}


}