#ifndef NHANVIENBC_H
#define NHANVIENBC_H
#include "nhanvien.h"
class nhanvienbc: public nhanvien
{
    private:
        double fixed_salary;
    public:
        nhanvienbc();
        nhanvienbc(string, string, string, double);
        //setters:
        void setFixedSalary();
        //getters:
        double getFixedSalary()const;
        //methods:
        double getSalary()const;
};
#endif