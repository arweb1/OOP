// Lab10Д.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Train.h"
int main()
{
    setlocale(0, "");
    srand(time(NULL));
    Train trains[N];
    Train tr;
    int var_point = 1;
    while(var_point != 0) {
        cout << "1 - Рандомное заполнение" << endl;
        cout << "2 - Вывод" << endl;
        cout << "3 - Сортировка по пунтку пункту и времени назначения" << endl;
        cout << "4 - Информация о поезеде по номеру" << endl;
        cout << "5 - Сортировка по номеру поезда" << endl;
        cout << "0 - Выход" << endl;
        cout << "Выберите действие >"; cin >> var_point;
        switch (var_point)
        {
        case 1:
        {
            tr.random_input();
            system("pause");
            cout << "----------------------------------------" << endl;
            break;
        }
        case 2:
        {
            tr.title_pr();
            system("pause");
            cout << "----------------------------------------" << endl;
            break;
        case 3:
        {
            tr.sort_time();
            tr.sort();
            system("pause");
            cout << "----------------------------------------" << endl;
            break;
        }
        case 4:
        {
            tr.title_pr();
            tr.inform();
            cout << endl;
            system("pause");
            cout << "----------------------------------------" << endl;
            break;
        }
        case 5:
        {
            tr.sort_num();
            cout << "Отсортировано по номеру поезда" << endl;
            system("pause");
            cout << "----------------------------------------" << endl;
            break;
        }
        }
        case 0:
        {
            cout << "Робота оконченна" << endl;
            system("pause");
            cout << "----------------------------------------" << endl;
            break;
        }
        default: "Ошибка!";
            break;



        }system("cls");
    }


    cout << "Работа программы оконченна" << endl;
    system("pause");
}