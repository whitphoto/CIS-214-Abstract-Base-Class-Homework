#include <iostream>
#include "commis1.h"

using namespace std;

CommissionWorker::CommissionWorker(string first, string last, double sal, double com, int quant) : Employee(first, last)
	{
		satSalary(sal);
		setCommission(com);
		setQuantity(quant);
	}
	
void CommissionWorker::setSalary(double s)
	{
		salary = s >0?s:0;
	}

void CommissionWorker::setCommission(double c)
	{
		commission = c>0?c:0;
	}

void CommissionWorker::setQuantity(int q)
	{
		quantity = q>0?q:0;
	}

double CommissionWorker::earnings()const
	{
		return salary + commission + quantity;
	}

void CommissionWorker::print() const 
	{
		cout << "\nCommission Worker: ";
		Employee::print();
	}
