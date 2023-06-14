#include "MyClass.h"

int main()
{
    setlocale(0, "");

    try {


        MyClass <int, float> ob1(10, 5.5);
        MyClass <float, int> ob2(40.3, 43);
        ob1.Show();
        ob2.Show();

    }
    catch (const std::exception& e) {
        cout << e.what() << endl;
    }
    cout << "" << endl;
}