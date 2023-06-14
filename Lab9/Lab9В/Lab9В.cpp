// Lab9В.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Staff.h"

int main() {
    setlocale(0, "");
    string names[5] = { "Ivan", "Artrey", "Kratos", "Thor", "Anubis" };
    int voz[5] = { 23, 20, 24, 25, 19 };
    int flag = 1;
    Staff newob;
    while (true)
    {
        try
        {

            cout << "\nМеню \n";
            cout << "1. Выберете объект с которым будете работать \n";
            cout << "2. Заполнение \n";
            cout << "3. Печать всех полей \n";
            cout << "4. Печать одного поля \n";
            cout << "5. Удаление по фамилии \n";
            cout << "6. Вставка \n";
            cout << "7. Функция поиска \n";
            cout << "0. Выход \n";
            cout << ">  ";
            int nmenu;
            cin >> nmenu;
            switch (nmenu)
            {
            case 0:
            {
                cout << "Выход с программы" << endl;
                exit(0);
            } break;
            case 1: {

                cout << "1. Работа через оператор<\n";
                cout << "2. Работа через Функтор\n";
                cout << ">  ";
                cin >> flag;
                cout << "\n";
            }
                  break;
            case 2: {

                cout << "1.Ввод вручную\n";
                cout << "2.Заполнить статическими данными\n";
                cout << ">  ";
                int m;
                cin >> m;
                cout << "\n";
                if (m == 1)
                {
                    int c;
                    cout << "\nСколько элементов хотите добавить:";
                    cin >> c;
                    string newname;
                    int newage;
                    for (int i = 0; i < c; i++) {
                        cout << "Сколько элементов хотите добавить:";
                        cin >> newname >> newage;
                        newob.Insert(newname, newage, flag);
                        cout << "\n";
                    }
                }
                else
                {
                    cout << "\n";
                    for (int i = 0; i < 5; i++) {
                        newob.Insert(names[i], voz[i], flag);
                    }
                    cout << "\n";
                    cout << "Добавление выполнено\n";
                }

            }
                  break;
            case 3: {
                newob.ShowAll(flag);
                cout << "\n";
            }
                  break;
            case 4: {
                newob.ShowOnlyOne(flag);
                cout << "\n";
            }
                  break;
            case 5: {


                cout << "Введите имя которое по которому пройдет удаление:";
                string del_str;
                cin >> del_str;
                newob.Delete(del_str, flag);
                cout << "\n";
                cout << "Удаление выполнено\n";

            }
                  break;
            case 6: {

                string newname;
                int newage = 0;
                int c;
                cout << "\nСколько элементов хотите добавить:";
                cin >> c;
                for (int i = 0; i < c; i++) {
                    cout << "Запишите добавляемый елемент в контейнер:";
                    cin >> newname >> newage;
                    newob.Insert(newname, newage, flag);

                }
            }
                  break;
            case 7: {

                cout << "1. Имя\n";
                cout << "2. Возраст\n";
                cout << "Выберите критерий для поиска:";

                int menu;
                cin >> menu;

                if (menu == 1)
                {
                    cout << "\nВведите имя для поиска:";
                    string findName;
                    cin >> findName;
                    map <Person, Person>::iterator ob = newob.Find_Name(findName, flag);
                    if (flag == 1)
                    {
                        cout << left << setw(10) << const_cast<Person&>(ob->first).getName() << " " << ob->second << endl;

                    }
                    else {
                        cout << left << setw(10) << const_cast<Person&>(ob->second).getName() << " " << ob->first << endl;

                    }
                    cout << "\n";
                }
                else {

                    cout << "\nВведите возраст для поиска:";
                    int findAge;
                    cin >> findAge;
                    map <Person, Person>::iterator ob = newob.Find_Age(findAge, flag);
                    if (flag == 1)
                    {
                        cout << left << setw(10) << const_cast<Person&>(ob->first).getName() << " " << ob->second << endl;

                    }
                    else {
                        cout << left << setw(10) << const_cast<Person&>(ob->second).getName() << " " << ob->first << endl;

                    }
                    cout << "\n";

                }
            }
                  break;
            default:
                throw exception("Ошибка при выборе пункта меню");

                break;
            }
        }
        catch (const exception er)
        {
            cout << er.what() << "\n";
        }
    }
}