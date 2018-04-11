#include <iostream>
#include "boss1.h"

using namespace std;

Boss::Boss(string first, string last, double s) : employee(first, last) // call base constructor
	{
		setWeeklySalary(s);
		
	}
	
void Boss::setWSeeklySalary(double s)
	{
		weeklySalary = s > 0 ? s:0;
		
	}
	
	double Boss::earnings() const {return weeklySalary;}
	
	void Boss::print() const
		{
			cout << "\n		Boss: ";
			Employee::print();
		}
