#include "nhanvienbc.h"

nhanvienbc::nhanvienbc(){
}
nhanvienbc::nhanvienbc(string, string, string, double){
    this->getID();
    this->getName();
    this->getID();
    this->fixed_salary=fixed_salary;
}
        //setters:
void nhanvienbc::setFixedSalary(){
    this->fixed_salary=fixed_salary;
}
        //getters:
double nhanvienbc::getFixedSalary()const
{
    return this->fixed_salary;
}
        //methods:
double nhanvienbc::getSalary()const
{
    return this->fixed_salary;
}