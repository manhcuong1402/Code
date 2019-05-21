#ifndef NHANVIENHHDB_H
#define NHANVIENHHDB_H
#include "nhanvienhh.h"
class nhanvienhhdb: public nhanvienhh
{
    private:
        double base_salary;
    public:
        nhanvienhhdb();
        nhanvienhhdb(string,string,string,double,double,double);
        //setters:
        void setBaseSalary();
        //getters:
        double getBaseSalary()const;
        //methods:
        double getSalary()const;
};
#endif