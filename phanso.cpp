#include <algorithm>
#include <iostream>
using namespace std;
class phanso
{
private:
	int tu,mau;
public:
	phanso(int t,int  m)
	{
		this-> tu=t;
		this-> mau=m;
	}
	void add(const phanso &b);
	void minus(const phanso &b);
	void multiply(const phanso &b);
	void division(const phanso &b);
	void rutgon();
	void inra();
};
int main()
{
	phanso x(0,1);
	int n;
	cin>>n;
	// Phep Cong
	for(int i=2;i<=n;i++)
	{
		phanso b(1,i);
		x.add(b);
		x.rutgon();
	}
	x.inra();
}
void phanso::add(const phanso &b)
{
	tu=tu*b.mau+mau*b.tu;
	mau=mau*b.mau;
}
void phanso::minus(const phanso &b)
{
	tu=tu*b.mau-mau*b.tu;;
	mau=mau*b.mau;
}
void phanso::multiply(const phanso &b)
{
	tu=tu*b.tu;
	mau=mau*b.mau;
}
void phanso::division(const phanso &b)
{
	tu=tu*b.mau;
	mau=mau*b.tu;
}
void phanso::rutgon()
{
	int x=__gcd(tu,mau);
	tu=tu/x;
	mau=mau/x;
}
void phanso::inra()
{
	cout<<tu<<"/"<<mau<<endl;
}
