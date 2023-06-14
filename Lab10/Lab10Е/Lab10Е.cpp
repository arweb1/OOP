// Lab10Е.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Matrix.h" 
int main()
{
    setlocale(0, "");

    Matrix matrix;
    int pos, e1, e2, pod1, pod2, size1, size2, number;
    int sel_item = 1;
    while (sel_item != 0) {
        cout << "Вывод массива на экран:" << endl;
        matrix.input();
        matrix.show();

        cout << "1. Поиск координат элемента с минимальными значениями" << endl;
        cout << "2. Изменить элемент" << endl;
        cout << "3. Подматрица" << endl;
        cout << "0. Выход" << endl;
        cin >> sel_item;
        switch (sel_item)
        {
        case 1:
            matrix.mincoords();
            matrix.showcoords( );
            system("pause");
            break;
        case 2:
            cout << "Введите координаты элемента:" << endl;
            cin >> e1;
            cin >> e2;
            e1--; 
            e2--;
            cout << "Введите номер, который вы хотите изменить:" << endl;
            cin >> number;
            matrix.fpos(e1, e2, number);
            system("pause");
            break;
        case 3:
            cout << "Введите координаты:" << endl;
            cin >> pod1;
            cin >> pod2;
            pod1--; 
            pod2--;
            cout << "Введите размер:" << endl;
            cin >> size1;
            cin >> size2;
            if (pod1 < 0 || pod1 > n || pod2 < 0 || pod2 > n || size1 > n - pod1 || size2 > n - pod2) {
                cout << "Вы за дозволенные значения" << endl;
            }
            else
                matrix.getpodmatrix(pod1, pod2, size1, size2);
            system("pause");
            break;
        case 0:
            cout << "Работа программы окончена" << endl;
            exit(0);
            break;
        default:
            cout << "Ошибка" << endl;
            break;
        }
        system("cls");
    }
}