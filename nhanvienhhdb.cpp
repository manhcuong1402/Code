#include "nhanvienhhdb.h"

nhanvienhhdb::nhanvienhhdb(){
}
nhanvienhhdb::nhanvienhhdb(string,string,string,double,double,double){
    this->getID();
    this->getName();
    this->getTax();
    this->getTongdoanhthu();
    this->getMucluong();
    this->base_salary=base_salary;
}
        //setters:
void nhanvienhhdb::setBaseSalary(){
    this->base_salary=base_salary;
}
        //getters:
double nhanvienhhdb::getBaseSalary()const{
    return this->base_salary;
}
        //methods:
double nhanvienhhdb::getSalary()const
{
    return this->tongdoanhthu * this->mucluong/100 + this->base_salary * 0.1;
}