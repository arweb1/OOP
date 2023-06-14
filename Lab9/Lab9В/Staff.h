#pragma once
#include <string.h>
#include <ostream>
#include <iostream>
#include <map>
#include <iomanip>
#include <exception>
using namespace std;

class Person {
    string name;
    int age;
public:
    Person();
    Person(const string a);
    Person(const int a);

    string getName()const;
    int getAge()const;
    friend ostream& operator<<(ostream& s, const Person& ob);
    bool operator()(const Person& d1, const Person& d2) const;
    friend bool operator < (const Person& d1, const Person& d2);

};


class Staff {

public:
    map <Person, Person> m1;
    map <Person, Person, Person> m2;

    void Insert(const string a, const int b, const int flag);
    map <Person, Person>::iterator Find_Name(const string findKey, const int flag);
    map <Person, Person>::iterator Find_Age(const int find_Age, const int flag);
    void ShowAll(const int flag);
    void ShowOnlyOne(const int flag);
    void Delete(const string del_Name, const int flag);
};