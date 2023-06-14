#pragma once
#include <iostream>
#include <iomanip>
#define N 5
using namespace std;

class Train {

public:



    string destination;
    int TrainNumber;
    int hours;
    int minutes;

    bool CheckingHours();
    bool CheckingMinutes();
    void PrintTime();
    void print();
    void sort_time();
    void sort_num();
    void sort();
    void random_input();
    void inform();
    void title_pr();

};
