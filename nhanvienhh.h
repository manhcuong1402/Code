#ifndef NHANVIENHH_H
#define NHANVIENHH_H
#include "nhanvien.h"
class nhanvienhh: public nhanvien
{
    protected:
        double tongdoanhthu;
        double mucluong; //10%
    public:
        nhanvienhh();
        nhanvienhh(string,string,string,double,double);
        //setters:
        void setTongdoangthu(double);
        void setMucluong(double);
        //getters:
        double getTongdoanhthu()const;
        double getMucluong()const;
        //methods:
        double getSalary()const;
};
#endif