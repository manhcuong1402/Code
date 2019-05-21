#ifndef NHANVIENHD_H
#define NHANVIENHD_H
#include "nhanvien.h"
class nhanvienhd: public nhanvien
{
    private:
        double time;
        double time_salary;
    public:
        nhanvienhd();
        nhanvienhd(string,string,string,double t,double);
        //setters:
        void setTime();
        void setTimeSalary();
        //getters:
        double getTime()const;
        double getTimeSalary()const;
        //methods:
        double getSalary()const;
};
#endif