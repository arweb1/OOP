#pragma once
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <map>
using namespace std;

class Number
{
private:
    string number;

public:

    Number();
    Number(const string b);
    string GetNumber()const;
    friend ostream& operator<<(ostream& s, const Number& ob);

};
class Name
{
private:
    string name;
public:
    map <Name, Number> m1;
    Name();
    Name(const string a);
    string GetName()const;
    void Fill_Map(const string a, const string b);
    map <Name, Number>::iterator Find_Name(string findKey);

    void ShowAll()const;
    void PrinfSome(const string let);
    void Delete(const string let);
    friend ostream& operator<<(ostream& s, const Name& ob);
    friend bool operator < (const  Name& d1, const  Name& d2);

};
