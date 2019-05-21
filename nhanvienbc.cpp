#include "nhanvienbc.h"

nhanvienbc::nhanvienbc(){}
nhanvienbc::nhanvienbc(string id, string name, string tax, double fixed_salary){
    this->id=id;
    this->fullname=name;
    this->taxcode=tax;
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