#include "nhanvienhh.h"

nhanvienhh::nhanvienhh(){
}
nhanvienhh::nhanvienhh(string,string,string,double,double){
    this->getID();
    this->getName();
    this->getTax();
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