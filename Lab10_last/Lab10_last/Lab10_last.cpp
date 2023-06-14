// Lab10_last.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Test.h"


int main()
{
	setlocale(0, "");
	srand(time(0));
	Class ob;
	while (true) {
		try {
			cout << endl;
			cout << "1. Найти минимальное\n";
			cout << "2. Сортировка\n";
			cout << "3. Сумма положительных\n";
			cout << "4. Тест мин\n";
			cout << "5. Тест сортировки\n";
			cout << "6. Тест суммы\n";
			cout << "0. Выход\n";
			cout << ">  ";
			int menu;
			cin >> menu;
			cout << endl;
			switch (menu)
			{
			case 0:
			{
				cout << "Выход из программы";
				exit(0);
			}
			case 1: {
				int num1, num2;
				cout << "Введите два числа:";
				cin >> num1 >> num2;
				cout << "Меньшее число в значении: " << ob.mini(num1, num2);
				cout << "\n";
			}
				  break;
			case 2: {
				ob.sortCorrect();
			}
				  break;
			case 3: {
				Test<int>array;
				int num = 0;
				for (int i = 0; i < 10; i++) {
					num = rand() % 20 - 10;
					array.fill(num);
				}
				cout << "\n";
				array.print();
				cout << "\n";
				int summa = 0;
				for (int i = 0; i < 10; i++) {
					if (*(array.GetMas() + i) > 0) {
						summa += *(array.GetMas() + i);
					}
				}
				cout << "Ожидаемый результат: " << summa;
				cout << "\n";
				cout << " " << ob.sum(array.GetMas(), summa);
			}
				  break;
			case 4: {
				int num1, num2;
				cout << "Введите 2 числа:";
				cin >> num1 >> num2;
				cout << ob.miniWrong(num1, num2);
				cout << "\n";
			}
				  break;
			case 5: {

				ob.sortWrong();
			}
				  break;
			case 6: {
				Test<int>array;
				int num = 0;
				for (int i = 0; i < 10; i++) {
					num = rand() % 20 - 10;
					array.fill(num);
				}
				cout << "\n";
				array.print();
				cout << "\n";
				int summa = 0;
				for (int i = 0; i < 10; i++) {
					if (*(array.GetMas() + i) > 0) {
						summa += *(array.GetMas() + i);
					}
				}
				cout << "Ожидаемый результат: " << summa;
				cout << "\n";
				cout << "Результат: " << ob.sumWrong(array.GetMas(), summa);
			}
				  break;
			default:
				break;
			}
		}
		catch (const exception e)
		{
			cout << e.what() << "\n";
		}
	}
	cout << "\n";
}
