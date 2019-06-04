#pragma once
#include <bits/stdc++.h>
using namespace std;
class KhachHang
{
   protected:
        static int counter;
        string fullname;
        int year;
        string que_quan;
        int sdt;
        int cmt;
        int ID;
        double diem_thuong;
        double triet_khau;
    public:
        KhachHang();
        KhachHang(string,int,string,int,int,double,double);
        bool setName(string);
        bool setID(int);
        string getName()const;
        int getID()const;
        double getDiemThuong()const;
        double getTrietKhau()const;
        void Print()const;
};

KhachHang::KhachHang(){}
int KhachHang::counter=1;
KhachHang::KhachHang(string name,int year,string quequan,int sdt,int cmt,double diemthuong,double trietkhau){
    fullname=name;
    year=year;
    sdt=sdt;
    cmt=cmt;
    ID=counter;
    diem_thuong=diemthuong;
    triet_khau=trietkhau;
    counter++;
}
bool KhachHang::setName(string name){
    fullname=name;
}
bool KhachHang::setID(int id){
    ID=id;
}
string KhachHang::getName()const{
    return fullname;
}
int KhachHang::getID()const{
    return ID;
}
double KhachHang::getDiemThuong()const{
    //return don_gia/100.0;
}
double KhachHang::getTrietKhau()const{
    return diem_thuong/100.0;
}
void KhachHang::Print()const{
    cout<<ID<<" "<<fullname<<endl;
}