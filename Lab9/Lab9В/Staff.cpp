#include "Staff.h"

Person::Person()
{
	name = "";
	age = 0;
}

Person::Person(const string a)
{
	name = a;
	age = 0;
}

Person::Person(const int a)
{
	age = a;

	name = "";
}


string Person::getName()const
{
	return name;
}

int Person::getAge()const
{
	return age;
}

bool Person::operator()(const Person& d1, const Person& d2) const
{ //functor_sort
	return d1.age < d2.age;
}

ostream& operator<<(ostream& s, const Person& ob)
{
	return s << ob.name << "\t" << ob.age;
}

bool operator<(const Person& d1, const Person& d2)
{   //insert
	return d1.name < d2.name;
}




void Staff::Insert(const string a, const int b, const int flag)
{
	if (flag == 1)
	{
		m1.insert({ Person(a),  Person(b) });
	}
	else {
		m2.insert({ Person(b),  Person(a) });
	}
}
map <Person, Person>::iterator Staff::Find_Name(const string findKey, const int flag)
{
	if (flag == 1)
	{
		if (m1.find(Person(findKey)) == m1.end()) {
			throw exception("Ёлемент не найден");
		}
		else {
			return  m1.find(Person(findKey));
		}
	}
	else {
		//return  m2.find(Person(findKey));
		map <Person, Person, Person>::iterator p;
		for (p = begin(m2); p != end(m2); ) {
			if (const_cast<Person&>(p->second).getName() == findKey)
				break;
			else
				p++;
		}
		if (p == m2.end()) {
			throw exception("Ёлемент не найден");
		}
		else {
			return p;
		}

	}

}

map<Person, Person>::iterator Staff::Find_Age(const int find_Age, const int flag)
{

	if (flag == 1)
	{

		map <Person, Person>::iterator p;
		for (p = begin(m1); p != end(m1); ) {
			if (const_cast<Person&>(p->second).getAge() == find_Age)
				break;
			else
				p++;
		}
		if (p == m1.end()) {
			throw exception("Ёлемент не найден");
		}
		else {
			return p;
		}
		//return p;
	}
	else {

		if (m2.find(Person(find_Age)) == m2.end()) {
			throw exception("Ёлемент не найден");
		}
		else {
			return  m2.find(Person(find_Age));
		}

	}

}



void Staff::ShowAll(const int flag)
{
	if (flag == 1)
	{

		for (auto p = begin(m1); p != end(m1); p++) {
			cout << left << setw(10) << const_cast<Person&>(p->first).getName() << " " << p->second << endl;
		}
	}
	else {
		for (auto p = begin(m2); p != end(m2); p++) {
			cout << left << setw(10) << const_cast<Person&>(p->second).getName() << " " << p->first << endl;
		}
	}
}

void Staff::ShowOnlyOne(const int flag)
{
	if (flag == 1)
	{
		int menu;
		cout << "1. ѕечать имен\n";
		cout << "2. ѕечать возрастов\n";
		cout << "¬ыберите пункт меню";
		cout << ":";
		cin >> menu;
		cout << "\n";

		if (menu == 1) {
			for (auto p = begin(m1); p != end(m1); p++) {
				cout << ((Person&)p->first).getName() << endl;
			}
		}
		else
		{
			for (auto p = begin(m1); p != end(m1); p++) {
				cout << ((Person&)p->second).getAge() << endl;
			}

		}
	}
	else {
		int menu;
		cout << "1. ѕечать имен\n";
		cout << "2. ѕечать возрастов\n";
		cout << "¬ыберите пункт меню";
		cout << ":";
		cin >> menu;
		cout << "\n";

		if (menu == 1) {
			for (auto p = begin(m2); p != end(m2); p++) {
				cout << ((Person&)p->second).getName() << endl;
			}
		}
		else
		{
			for (auto p = begin(m2); p != end(m2); p++) {
				cout << ((Person&)p->first).getAge() << endl;
			}

		}

	}


}

void Staff::Delete(const string del_Name, const int flag)
{

	if (flag == 1)
	{


		for (auto p = begin(m1); p != end(m1); ) {
			if (const_cast<Person&>(p->first).getName() == del_Name)
				p = m1.erase(p);
			else
				p++;
		}
	}
	else
	{
		for (auto p = begin(m2); p != end(m2); ) {
			if (const_cast<Person&>(p->second).getName() == del_Name)
				p = m2.erase(p);
			else
				p++;
		}
	}


}