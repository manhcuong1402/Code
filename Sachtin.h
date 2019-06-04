#pragma once;
#include "Sach.h"
#include<bits/stdc++.h>
using namespace std;
class SachTin : public Book
{
    private:
        float gia_nhap;
    public:
        SachTin();
        SachTin(string,int,float,float);
        bool setGianhap(float);
        float getGianhap()const;
        virtual float getGiathanh()const;
};

SachTin::SachTin(){}
SachTin::SachTin(string name,int year,float heso,float gianhap)
{
    this->name=name;
    this->yearSX=year;
    this->heso=heso;
    this->gia_nhap=gianhap;
}
bool SachTin::setGianhap(float gianhap)
{
    this->gia_nhap=gianhap;
}
float SachTin::getGianhap()const
{
    return this->gia_nhap;
}
float SachTin::getGiathanh()const
{
    return this->gia_nhap * this->heso;
}

