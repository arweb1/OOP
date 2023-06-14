// Lab10А.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Numbers.h"

int main()
{

	vector<Numbers> v1;
	vector<Numbers> v2;
	while (true)
	{
		setlocale(LC_ALL, "ru");
		cout << "Меню\n";
		cout << "1.Ввести данные в вектора\n";
		cout << "2.Операции сравнения\n";
		cout << "> ";
		try
		{
			int nmenu;
			int simvol;
			cin >> nmenu;

			switch (nmenu)
			{


			case 1: {
				string value1, value2, value3, value4;

				cout << "\nВведите данные для первого вектора:" << endl;
				cout << "value1 = ";
				cin >> value1;
				cout << endl;
				cout << "value2 = ";
				cin >> value2;
				cout << endl;
				cout << "\nВведите данные для второго вектора:" << endl;
				cout << "value1 = ";
				cin >> value3;
				cout << endl;
				cout << "value2 = ";
				cin >> value4;
				cout << endl;
				cout << "\n";
				int new_val1 = atoi(value1.c_str());
				int new_val2 = atoi(value1.c_str());

				int new_num1 = atoi(value3.c_str());
				int new_num2 = atoi(value4.c_str());
				if (!(new_val1 / 1) || !(new_val2 / 1) || !(new_num1 / 1) || !(new_num2 / 1))
				{
					throw exception("Ошибка ввода. Введено не целое число.");
				}
				else {
					v1.push_back(Numbers(new_val1, new_val2));
					v2.push_back(Numbers(new_num1, new_num2));
				}
			}
				  break;

			case 2: {
				if (v1.empty() || v2.empty()) {
					throw exception("Вектора пусты");
				}
				else {

					cout << "Выберете символом для сравнения:" << endl;
					cout << "1. == " << endl;
					cout << "2. < " << endl;
					cout << "3. > " << endl;
					cin >> simvol;
					if (simvol == 1)
					{
						cout << "-";
						bool result = v1 == v2;
						if (result)
						{
							cout << " Суммы в векторах равны \n";
						}
						else {
							cout << " Суммы в векторах не равны \n";
						}
					}
					else if (simvol == 2) {
						bool result1 = v1 == v2;
						bool result = v1 < v2;
						if (result1)
						{
							cout << " Суммы в векторах равны \n";
						}
						else if (result)
						{
							cout << " Сумма в векторе 1 меньше чем в векторе 2 \n";
						}
						else {
							cout << " Сумма в векторе 2 меньше чем в векторе 1 \n";
						}
					}
					else if (simvol == 3) {
						bool result1 = v1 == v2;
						bool result = v1 > v2;
						if (result1)
						{
							cout << " Суммы в векторах равны \n";
						}
						else if (result)
						{
							cout << " Сумма в векторе 1 больше чем в векторе 2 \n";
						}
						else {
							cout << " Сумма в векторе 2 больше чем в векторе 1 \n";
						}
					}
					else {
						throw exception("Ошибка ввода");
					}
				}
			}

				  break;

			default:
				break;
			}
		}
		catch (const exception er)
		{
			cout << er.what() << "\n";
		}
	}
}

