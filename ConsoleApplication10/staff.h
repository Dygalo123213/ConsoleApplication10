#pragma once
#include "Employee.h"
class staff : public Employee
{
protected:
    float bonus;
public:
    staff();
    staff(string name, string position, float salary, float bonus);
    virtual void show()const override;
    virtual float calcSalary()const override;

};
    