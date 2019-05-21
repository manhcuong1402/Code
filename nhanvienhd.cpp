#include "nhanvienhd.h"

nhanvienhd::nhanvienhd(){
}
nhanvienhd::nhanvienhd(string,string,string,double t,double){
    this->getID();
    this->getName();
    this->getTax();
    this->time=t;
    this->time_salary=time_salary;
}
        //setters:
void nhanvienhd::setTime(){
    this->time=time;
}
void nhanvienhd::setTimeSalary(){
    this->time_salary=time_salary;
}
        //getters:
double nhanvienhd::getTime()const{
    return this->time;
}
double nhanvienhd::getTimeSalary()const{
    return this->time_salary;
}
        //methods:
double nhanvienhd::getSalary()const{
    return this->time_salary * this->time;
}