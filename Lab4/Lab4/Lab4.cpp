#include "DataBase.h"
int main(void) {
	setlocale(LC_ALL, "RU");
	string* n;
	float dz;
	int moveEl;
	int moveDir;
	DataBase* tempDB = new DataBase();

	for (int a = 0; !a;) {
		cout << "1. Добавить запись" << endl;
		cout << "2. Удалить запись" << endl;
		cout << "3. Сортировать базу" << endl;
		cout << "4. Вывести базу" << endl;
		cout << "5. Выход" << endl;
		cout << "> ";
		int choose;
		cin >> choose;
		switch (choose) {
		case 1: {
			
			cout << "Запись создана!" << endl;
			string name1 = "Заря";
			string name2 = "Росинка";
			string name3 = "Петренко";
			char name1c = 'Д';
			char name2c = 'К';
			char name3c = 'Ч';
			tempDB->AddRecord(&name1, &name1c, 300, 120);
			tempDB->AddRecord(&name2, &name2c, 174, 27);
			tempDB->AddRecord(&name3, &name3c, 56, 6);
			break;
		}

		case 2: {
			tempDB->DeleteRecord();
			break;
		}

		case 3: {
			tempDB->Sort();
			break;
		}

		case 4: {
			cout << *tempDB;
			cout << "\nНажмите клавишу для продолжения..." << endl;
			break;
		}

		case 5: {
			a = 1;
			break;
		}

		default: {
			cout << "Неверный вызов";
			break;
		}
		}
	}
	return 0;
}
