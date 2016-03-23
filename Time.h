#pragma once
#include <iostream>

using namespace std;
class Time
{

public:
	int hours;
	int mins;
	Time(int, int);
	void set(int, int);
	void get(int & , int &);
	friend ostream& operator << (ostream&, const Time&);
	Time operator++(int);
	~Time();
};

