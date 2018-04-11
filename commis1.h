#ifndef COMMIS1_H
#define COMMIS1_H
#include "employ2.h"

class CommissionWorker : public Employee
	{
		private:
			double salary;
			double commission;
			int quantity;
		public:
			CommissionWorker(string, string, double = 0.0, double = 0.0, int = 0);
			void setSalary(double);
			void setCommission(double);
			void setQuantity(int);
			virtual double earnings() const;
			virtual void print() const;
			
			
	};
	
	#endif
	
