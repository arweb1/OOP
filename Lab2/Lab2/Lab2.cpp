// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Kolkhoz.h"
int main()
{
	setlocale(0, "");
	string name;
	float dz;
	int moveEl;
	int moveDir;
	int q1, q2;
	int chooseId;
	Kolkhoz obj[N];
	cls();
	while (true) {
		cout << "¬ведите желаемое действие:\n1. ѕерегрузка оператора потокового ввода.\n2. ѕерегрузка оператора потокового вывода.\n3. ѕерегрузка оператора соответстви€ (==).\n4. ѕерегрузка оператора присваивани€.\n5. ѕерегрузка оператора суммы.\n6. ѕерегрузка оператора '()'.\n7. ѕерегрузка оператора '[]'" << endl;
		cin >> chooseId;
		switch (chooseId) {
		case 1:
			cout << "\nѕерегрузка оператора потокового ввода '>>'.";
			cout << "\n¬ведите номер экземпл€ра класса: ";
			cin >> q1;
			if ((q1 > N - 1) || (q1 < 0)) { cout << "ќшибка! Ёкземпл€ра с таким индексом не существует."; exit(-1); }
			cin >> obj[q1];
			break;
		case 2:
			cout << "\nѕерегрузка оператора потокового вывода '<<'.";
			cout << "\n¬ведите номер экземпл€ра класса: ";
			cin >> q1;
			if ((q1 > N - 1) || (q1 < 0)) { cout << "ќшибка! Ёкземпл€ра с таким индексом не существует."; exit(-1); }
			cout << obj[q1];
			break;
		case 3:
			cout << "ѕерегрузка оператора соответстви€ '=='.\n";
			cout << "¬ведите номера экземпл€ров класса которые нужно сравнить\n";
			cin >> q1;
			cin >> q2;
			if (q1 != q2 && q1 >= 0 && q2 >= 0) {
				obj[q1] == obj[q2];
			}
			else {
				cout << "Ёкземпл€ры класса равны" << endl;
			}
			break;
		case 4:
			cout << "ѕерегрузка оператора прирасваивани€ '='.\n";
			cout << "¬ведите номера экземпл€ров класса: замен€емый и замен€ющий\n";
			cin >> q1;
			cin >> q2;
			if (q1 != q2 && q1 >= 0 && q2 >= 0) {
				obj[q1] = obj[q2];
			}
			else {
				exit(-1);
			}
			break;
		case 5:
			cout << "ѕерегрузка оператора суммы '+'.\n";
			cout << "¬ведите номера экземпл€ров класса: которые нужно сложить\n";
			cin >> q1;
			cin >> q2;
			if (q1 >= 0 && q2 >= 0 && q1 < N && q2 < N) {
				Kolkhoz obj2 = obj[q1];/////////////////////////////////////
				cout << obj2;
			}
			cout << endl;
			break;
		case 6:
			cout << "ѕерегрузка оператора '()'" << endl;
			for (int i = 0; i < N; i++) {
				cout << "Ќазвание, опасна€ зона, движение элементов, движение дырок: ";
				cin >> name;
				cin >> dz;
				cin >> moveEl;
				cin >> moveDir;
				obj[i].operator()(name, dz, moveEl, moveDir);
			}
			break;
		case 7:
			Kolkhoz ob2;
			cout << "ѕерегрузка оператора '[]'" << endl;
			for (int i = 0; i < N; i++) {
				cout << obj[i][2] << endl;
			}
			break;
		}
	}
	return 0;
}
