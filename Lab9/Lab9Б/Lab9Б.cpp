// Lab9Б.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include  "Name.h";


int main()
{
	setlocale(0, "");
	Name obj;
	
	while (true)
	{
		try
		{
			cout << "\nМеню\n";
			cout << "1.Заполнение ассоциативный массива\n";
			cout << "2.Печать всего списка\n";
			cout << "3.Поиск по имени\n";
			cout << "4.Напечатать всех, у кого фамилия начинается на определенную букв\n";
			cout << "5.Удалить всех, у кого фамилия начинается на определенную букву\n";
			cout << ">  ";
			int nmenu;
			cin >> nmenu;
			cout << endl;
			switch (nmenu)
			{
			case 1: {

				cout << "1.Заполнить вручную\n";
				cout << "2.Заполнить статическими данными\n";
				cout << "Введите выбраный пункт:";
				int zap_menu;
				cin >> zap_menu;
				cout << "\n";
				if (zap_menu == 1)
				{
					int size;
					cout << "Input size:";
					cin >> size;
					cout << "\n";
					string name, number;
					for (int i = 0; i < size; i++)
					{
						cout << "input name and number:";
						cin >> name >> number;
						obj.Fill_Map(name, number);
						cout << "\n";
					}
				}
				else
				{
					cout << "\n";
					string name[] = { "Nikita","Danil","Artem", "Sonya", "Denis", "Van", "Denis", "Vlad" };
					string number[] = { "+380305559400","+380550324000","+380111123940","+380112239400","+380330200011","+380345266111","+380302239411","+380801284111" };
					for (int i = 0; i < 5; i++)
					{
						obj.Fill_Map(name[i], number[i]);
					}

				}
				cout << "Заполнение выполнено\n";
			}
				  break;
			case 2: {
				obj.ShowAll();
			}
				  break;
			case 3: {

				cout << "\nВведите имя для поиска:";
				string findName;
				cin >> findName;
				map <Name, Number>::iterator ob = obj.Find_Name(findName);
				//if (m1.find(Name(findKey)) == m1.end())
				cout << ob->first << " " << ob->second << endl;//

				cout << "\n";
			}
				  break;
			case 4: {

				cout << "\nВведите букву для поиска:";
				string findName;
				cin >> findName;
				if (findName.length() > 1)
				{
					throw exception("Слишком много символов\n");
				}
				obj.PrinfSome(findName);

			}
				  break;
			case 5: {
				string DelName;
				cout << "\nВведите букву для удаления:";
				cin >> DelName;
				if (DelName.length() > 1)
				{
					throw exception("Слишком много символов\n");
				}
				obj.Delete(DelName);
			}
				  break;

			default:
				break;
			}
		}
		catch (exception err)
		{
			std::cout << err.what() << std::endl;
		}
	}
}

