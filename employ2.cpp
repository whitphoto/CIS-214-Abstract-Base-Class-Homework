#include <string.h>
#include <assert.h>
#include "employ2.h"

using namesapce std;

Employee::Employee(string first , string last)
	{
		firstName = first;
		lastName = last;
	}

Employee::~Employee()
	{
		//delete[]firstName;
		//delete[]lastName;
	}
	
const string Employee::getFirstName() const
	{
		return firstName;
	}

const string Employee::getLastName()
	{
		return lastName;
	}
	
void Employee::print() const
	{
		cout << firstName << " " << lastName;
	}
