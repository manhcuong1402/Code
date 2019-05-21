#include "nhanvienhh.h"

nhanvienhh::nhanvienhh(){}
nhanvienhh::nhanvienhh(string id,string name,string tax,double,double){
    this->id=id;
    this->fullname=name;
    this->taxcode=tax;
    this->tongdoanhthu=tongdoanhthu;
    this->mucluong=mucluong;
}
        //setters:
void nhanvienhh::setTongdoangthu(double){
    this->tongdoanhthu=tongdoanhthu;
}
void nhanvienhh::setMucluong(double){
    this->mucluong=mucluong;
}
        //getters:
double nhanvienhh::getTongdoanhthu()const{
    return this->tongdoanhthu;
}
double nhanvienhh::getMucluong()const{
    return this->mucluong;
}
        //methods:
double nhanvienhh::getSalary()const{
    return this->tongdoanhthu * this->mucluong;
}