#include "Timer.h"

#include <iostream>
#include <iomanip>


using namespace std;

Timer::Timer(const int sec) : sec(sec) {}


Timer::Timer(Timer* t) : sec(t->sec) {}


Timer::Timer(Timer& t) : sec(t.sec) {}


Timer::Timer(const int sec, const int min)
{
	this->sec = min * 60 + sec;
}

void Timer::get() const
{
	cout << "Секунд: " << sec << endl;
}

void Timer::set(const int sec, const int min)
{
	this->sec = min * 60 + sec;
}