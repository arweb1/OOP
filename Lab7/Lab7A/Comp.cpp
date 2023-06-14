#include "Comp.h"
Comp obj[n];

void Comp::Print() {
    result = to_string(r) + " + i*" + to_string(m);
    cout << result << endl;
    Loger(result);
}
void Comp::Write(int _x, int _y) {
    r = _x;
    m = _y;
    Print();
}
void Comp::Loger(string result) {
    
    big_result += result;
    big_result += "   ";

}
void Comp::Loger2() {
    try {

        ofstream out;           // поток для записи
        out.open("logs.txt"); // окрываем файл для записи
        if (out) {
            out << big_result;

        }
        else
        {
            cout << "Файл logs.txt не открыт!" << endl;
        }
        out.close();

    }
    catch (const std::exception& e) {
        cout << e.what() << endl;
    }
    
}
void Comp::Read() {
    
    try {

        int x, y;
        ifstream file;
        file.open("file.txt");
        if (file) {
            for (size_t i = 0; i < n; i++)
            {
                file >> x >> y;
                if (file.eof()) {
                    break;
                }
                Write(x, y);

            } cout << "функция Read() окончила свою работу" << endl;
        }
        else
        {
            cout << "Файл file.txt не открыт!" << endl;
        }
        file.close();
        Loger2();

    }
    catch (const std::exception& e) {
        cout << e.what() << endl;
    }
    
    
}
void demo() {

    try {


        ifstream file;
        file.open("file.txt");
        if (file) {
            for (size_t i = 0; i < n; i++)
            {
                int x0, y0;
                file >> x0 >> y0;
                if (file.eof()) {
                    break;
                }
                cout << x0 << ", " << y0 << endl;
            }
        }
        else
        {
            cout << "Файл file.txt не открыт!" << endl;
        }
        file.close();

    }
    catch (const std::exception& e) {
        cout << e.what() << endl;
    }

}