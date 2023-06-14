#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <iomanip>
using namespace std;

class Airport {
public:
	//јэропорт (населенный пункт, пропускна€ способность, вместительность)
	string city_point;
	int speed;
	int size;
	Airport() { city_point = ""; speed = 0; size = 0; };
	void Change(Airport& obj, string& city_point, int speed, int size);
	void Show();
	void Sort();
	void autocomplete();
};
//AirConditioner obj[7];