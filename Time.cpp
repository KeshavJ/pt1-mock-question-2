#include "Time.h"
#include <iostream>

using namespace std;


Time::Time(int h, int m) {
	hours = h;
	mins = m;

}

void Time::get(int &h, int &ms){
	h = hours;
	ms = mins;

}

void Time::set(int h, int m) {
	hours = h;
	mins = m;
}

ostream &operator << (ostream &output, Time &t) {
	output << t.hours << ":" << t.mins << endl;
	return output;
}

Time Time :: operator++(int){
	Time temp(*this);
	if (mins <= 59)
	{
		operator ++(mins);
	}
	else {
		hours++;
	}
	return temp;
}

Time::~Time()
{
}
