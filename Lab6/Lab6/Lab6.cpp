#include "Airport.h"

int main()
{
    setlocale(0, "");
    //AirConditioner obj[7];
    Airport temp;
    Airport obj[7];
    int r = 0;

    for (int a = 0; !a;) {
        system("cls");
        cout << endl;
        cout << "1. Добавить записи\n";
        cout << "2. Сортировать базу\n";
        cout << "3. Вывести базу\n";
        cout << "4. Выход\n";
        cout << "> ";
        int choose;
        cin >> choose;
        switch (choose) {
        case 1: {
            
            temp.autocomplete();
            r = 1; cout << endl; cout << "В базу были добавлены записи." << endl; system("pause");
            break;
        }

        case 2: {
            if (r == 0) { cout << "В базе нет записей."; }
            else if (r == 1) { temp.Sort(); cout << endl; cout << "База сортирована." << endl; system("pause"); }
            break;
        }

        case 3: {
            if (r == 0) { cout << "В базе нет записей."; }
            else if (r == 1) { temp.Show(); cout << endl; cout << "База выведена на экран." << endl; system("pause"); }
            break;
        }

        case 4: {
            a = 1;
            cout << endl; cout << "Работа программы закончена." << endl; system("pause");
            break;
        }

        default: {
            cout << "Неверный вызов"; cout << endl;
            break;
        }
        }
    }
}

