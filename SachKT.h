#include "Sach.h"
#include <bits/stdc++.h>
using namespace std;
class SachKT : public Book
{
    private:
        float gia_nhap;
        float chiet_khau;
    public:
        SachKT();
        SachKT(string,int,float,float,float);
        bool setGianhap(float);
        bool setChietkhau(float);
        float getGianhap()const;
        float getChietkhau()const;
        virtual float getGiathanh()const;
};

SachKT::SachKT(){}
SachKT::SachKT(string name,int year,float heso,float gianhap,float chietkhau)
{
    this->name=name;
    this->yearSX=year;
    this->heso=heso;
    this->gia_nhap=gianhap;
    this->chiet_khau=chietkhau;
}
bool SachKT::setGianhap(float gianhap)
{
    this->gia_nhap=gianhap;
}
bool SachKT::setChietkhau(float chietkhau)
{
    this->chiet_khau=chietkhau;
}
float SachKT::getGianhap()const
{
    return this->gia_nhap;
}
float SachKT::getChietkhau()const
{
    return this->chiet_khau;
}
float SachKT::getGiathanh()const
{
    return this->gia_nhap * this->heso - this->chiet_khau;
}