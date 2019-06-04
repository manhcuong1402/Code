#pragma once
#include<bits/stdc++.h>
using namespace std;
class HangHoa
{
    protected:
        static int counter;
        int ID;
        string name;
        int so_luong;
        double don_gia;
    public:
        HangHoa();
        HangHoa(string,int,double); 
        bool setID(int);
        bool setName(int);
        bool setSoLuong(int);
        bool setDonGia(int);
        int getID()const;
        string getName()const;
        int getSoLuong()const;
        double getDonGia()const;
        void Print()const;
};

HangHoa::HangHoa(){}
int HangHoa::counter=1;
HangHoa::HangHoa(string name,int soluong,double dongia){
    ID=counter;
    this->name=name;
    so_luong=soluong;
    don_gia=dongia;
    counter++;
} 
bool HangHoa::setID(int id){
    ID=id;
}
bool HangHoa::setName(int name){
    name=name;
}
bool HangHoa::setSoLuong(int soluong){
    so_luong=soluong;
}
bool HangHoa::setDonGia(int dongia){
    don_gia=dongia;
}
int HangHoa::getID()const{
    return ID;
}
string HangHoa::getName()const{
    return name;
}
int HangHoa::getSoLuong()const{
    return so_luong;
}
double HangHoa::getDonGia()const{
    return don_gia;
}
void HangHoa::Print()const{
    cout<<ID<<" "<<this->name<<endl;
}