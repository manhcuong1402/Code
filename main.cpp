#include <bits/stdc++.h>
//#include "nhanvien.cpp"
#include "nhanvienbc.cpp"
//#include "nhanvienhd.cpp"
//#include "nhanvienhh.cpp"
//#include "nhanvienhhdb.cpp"
using namespace std;
int main()
{
    nhanvienbc B("A33340","Bui Manh Cuong","10",20000);
    B.setFixedSalary();
    
    
    cout<<"Luong cua nhan vien B: "<<B.getFixedSalary()<<endl;
    return 0;
}