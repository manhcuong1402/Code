#include <bits/stdc++.h>
#include "nhanvienbc.cpp"
#include "nhanvien.cpp"
#include "nhanvienhd.cpp"
#include "nhanvienhh.cpp"
#include "nhanvienhhdb.cpp"
using namespace std;
int main()
{
    nhanvien A("A33340","Bui Manh Cuong","10");
    nhanvienbc B("B33340","Bui Manh Cuong","10",2000);
    nhanvienhd C("C33340","Bui Manh Cuong","10",1500,2);
    nhanvienhh D("D33340","Bui Manh Cuong","10",5,2000);
    nhanvienhhdb E("E33340","Bui Manh Cuong","10",15,2000,20);
    cout<<"Luong cua nhan vien A: "<<A.getSalary()<<endl;
    cout<<"Luong cua nhan vien bien che B: "<<B.getSalary()<<endl;
    cout<<"Luong cua nhan vien  hop dong C: "<<C.getSalary()<<endl;
    cout<<"Luong cua nhan vien hoa hong D: "<<D.getSalary()<<endl;
    cout<<"Luong cua nhan vien hoa hong DB E: "<<E.getSalary()<<endl;
    return 0;
}