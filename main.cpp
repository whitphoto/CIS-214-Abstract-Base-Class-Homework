#include <iostream>
#include <cstdlib>
#include "employ2.h"
#include "boss1.h"
#include "commis1.h"
#include "hourly1.h"

using namespace std;

void virtualViaPointer(const Employee*);
void virtualViaReference(const Employee&);


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Boss john("John", "Clark", 800.00);
	john.print();
	
	CommissionWorker sue("Sue", "Taylor", 200.0,3.0,150);
	sue.print();
	cout << " Earned $" << sue.earnings();
	virtualViaPointer(&sue);
	virtualViaReference(sue);
	
	HourlyWorker bill("Bill", "Perkins", 13.7,45);
	bill.print();
	cout << " earned $" <<bill.earnings();
	virtualViaPointer(&bill);
	virtualViaReference(bill);
	system("PAUSE");
		
	return 0;
}

void virtualViaPointer(const Employee *baseClassPtr)
	{
		baseClassPtr->print();
		cout << " earned $" << baseClassPtr->earnings();
	}
	
	void virtualViaReference(const Employee &baseClassPtr)
		{
			baseClassPtr.print();
			cout << " earned $" << baseClassPtr.earnings();
			
		}
