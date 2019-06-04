#pragma once
#include<bits/stdc++.h>
using namespace std;
class NhanVien
{
    protected:
        static int counter;
        string fullname;
        int year;
        string que_quan;
        int sdt;
        int cmt;
        int ID;
    public:
        NhanVien();
        NhanVien(string,int,string,int,int);
        bool setName(string);
        bool setID(int);
        string getName()const;
        int getID()const;
        void Print()const;
        
};

NhanVien::NhanVien(){}
int NhanVien::counter=1;
NhanVien::NhanVien(string name,int year,string quequan,int sdt,int cmt){
    fullname=name;
    year=year;
    que_quan=quequan;
    sdt=sdt;
    cmt=cmt;
    ID=counter;
    counter++;
}
bool NhanVien::setName(string name){
    fullname=name;
}
bool NhanVien::setID(int id){
    ID=id;
}
string NhanVien::getName()const{
    return fullname;
}
int NhanVien::getID()const{
    return ID;
}
void NhanVien::Print()const{
    cout<<ID<<" "<<fullname<<endl;
}