#include "NhanVien.h"
#include "KhachHang.h"
#include "HangHoa.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    NhanVien A("Du",2000,"Ha_Noi",012,000);
    NhanVien B("Son",1997,"Ba_Vi",011,100);
    KhachHang C("CuongDepTrai",2000,"QN",013,102,2,2);
    HangHoa Q("Hong",105,15000);
    A.Print();
    B.Print();
    C.Print();
    Q.Print();

    }