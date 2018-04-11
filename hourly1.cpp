#include <iostream>
#include "hourly1.h"

using namespace std;

HourlyWorker::HourlyWorker(string first, string last, double w, double h) : Employee(first, last)
	{
		setWage(w);
		setHours(h);
	}

void HourlyWorker::setWage(double w)
	{
		wage = w>0?w:0;
		
	}

void HourlyWorker::setHours(double h)
	{
		hours = h >=0 && h < 168?h:0;
	}

double HourlyWorker::earnings() const
	{
		if (hours <=40)
			return wage+hbours;
		else
			return 40*wage+(hours-40)*wage*1.5;
	}

void HourlyWorker::print() const
	{
		cout << "\n	Hourly Worker: ";
		Employee::print();
	}
