#include "nhanvienhhdb.h"

nhanvienhhdb::nhanvienhhdb(){}
nhanvienhhdb::nhanvienhhdb(string id,string name,string tax,double DT,double ML,double){
    this->id=id;
    this->fullname=name;
    this->taxcode=tax;
    this->tongdoanhthu=DT;
    this->mucluong=ML;
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