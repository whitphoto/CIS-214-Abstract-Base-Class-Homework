#ifndef HOURLY1_H
#define HOURLY1_H

#include "employ2.h"

class HourlyWorker : public Employee
	{
		private:
			double wage;
			double hours;

		public:
			HourlyWorker(string, string, double = 0.0, double = 0.0);
			void setWage(double);
			void setHours(double);
			virtual double earnings() const;
			virtual void print() const;
				
		
	};
	#endif
