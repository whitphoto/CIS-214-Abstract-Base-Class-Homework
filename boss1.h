//Boss class derived from employee

#ifndef BOSS1_H
#define BOSS1_H
#include "employ2.h"

class Boss : public Employee
	{
		private:
			double weeklySalary;
			
		public:
			Boss(string, string, double = 0.0);
			void setWeeklySalary(double);
			virtual double earnings() const;
			virtual void print() const;
	};
	
	#endif
