#include "Employee.h"

Employee::Employee()
{
	name = "Noname";
	position = "Noposition";
	salary = 0;
}

Employee::Employee(string name, string position, float salary)
{
	this->name = name;
	this->position = position;
	this->salary = salary;
}

void Employee::show() const
{
	cout << "Name:" << name << endl;
	cout << "Position:" << position << endl;
	cout << "salary:" << salary << "uah"<< endl;

}

float Employee::calcSalary() const
{
	return salary;
}
