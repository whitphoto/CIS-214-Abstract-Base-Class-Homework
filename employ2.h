//Abstract Base Class

#ifndef EMPLOY2_H
#define EMPLOY2_H

#include <iostream>
#include <string>

using namespace std;

class Employee
	{
		private:
			string firstName;
			string lastName;
			
		public:
			Employee(string, string);
			~Employee();
			string getFirstName() const;
			string getLastName() const;
			
			//pure virtual function makes Emplotyee abstract base class
			
			virtual double earinings() const=0;
			virtual void print() const;
			
			
			
	};
	#endif
	
