#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Kolkhoz
{
public:
    string name;
    char type;
    int square;
    int count;
public:
    void Set(string name, char type, int square, int count);
    void Get(string& name, char& type, int& square, int& count);
    void Print();
};