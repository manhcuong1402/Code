#include "Sach.h"
#include "Sachtin.h"
#include "SachKT.h"
using namespace std;
int main()
{
    Book *A[6];
    for(int i=0; i<2;i++)
    {
        if (i%2==0)
            A[i]= new SachKT("KT1",1999,2.0,20000,5.5);
        else
            A[i]= new SachTin("Java",1998,2.0,30000);
    }
    cout<<"Sach KT: ";
    A[0]->Print();
    cout<<"Sach Tin: ";
    A[1]->Print();
    cout<<"Gia thanh sach KT la: "<<A[0]->getGiathanh()<<endl;
    cout<<"Gia thanh sach Tin la: "<<A[1]->getGiathanh()<<endl;
    return 0;
}