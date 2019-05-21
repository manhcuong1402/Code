#ifndef NHANVIENHHDB_H
#define NHANVIENHHDB_H
#include "nhanvienhh.h"
class nhanvienhhdb: public nhanvienhh
{
    private:
        double base_salary;
    public:
        nhanvienhhdb(){

        }
        nhanvienhhdb(string,string,string,double,double,double){
            this->getID();
            this->getName();
            this->getTax();
            this->getTongdoanhthu();
            this->getMucluong();
            this->base_salary=base_salary;
        }
        //setters:
        void setBaseSalary(){
            this->base_salary=base_salary;
        }
        //getters:
        double getBaseSalary()const{
            return this->base_salary;
        }
        //methods:
        double getSalary()const{
            return this->tongdoanhthu * this->mucluong/100 + this->base_salary * 0.1;
        }
};
#endif
