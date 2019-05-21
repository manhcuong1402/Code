#include "nhanvien.h"

nhanvien::nhanvien(){}
nhanvien::nhanvien(string id, string name, string tax)
{
    this->id=id;
    this->fullname=name;
    this->taxcode=tax;
}
//setters:
void nhanvien::setID(string id)
{
    this->id=id;
}
void nhanvien::setName(string name)
{
    this->fullname=name;
}
void nhanvien::setTax(string tax)
{
    this->taxcode=tax;
}
//getters:
string nhanvien::getID()const
{
    return this->id;
}
string nhanvien::getName()const
{
    return this->fullname;
}
string nhanvien::getTax()const
{
    return this->taxcode;
}
//methods:
double nhanvien::getSalary()const
{
    return 0;
}