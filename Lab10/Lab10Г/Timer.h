#pragma once
class Timer {
private:
	int sec;

public:
	Timer(const int);
	Timer(const int, const int);
	
	Timer(Timer*);
	Timer(Timer&);

		 
	void get() const;
	void set(const int, const int = 0);
};
