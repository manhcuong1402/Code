#include <bits/stdc++.h>
using namespace std;
class point
{
	private:
		double hoanhdo, tungdo;
	public:
		point();
		point(double x,double y);
		//setters
		void setX(double x);
		void setY(double y);
		//getters
		double getX()const;
		double getY()const;		
};

class hinhtamgiac
{
	private:
		point A,B,C;
	public:
		hinhtamgiac();
		hinhtamgiac(point A, point B, point C);
		hinhtamgiac(double x1,double y1,double x2,double y2,double x3,double y3);
		// setters:
		bool setA(const point &);
		bool setB(const point &);
		bool setC(const point &);
		bool setA(double x1, double y1);
		bool setB(double x2, double y2);
		bool setC(double x3, double y3);
		// getters:
		point getA()const;
		point getB()const;
		point getC()const;
		bool checkTG(point A,point B,point C);
		// methods:
		double getArea()const;
		double getPerimeter()const;
};

int main()
{
	double x1,y1,x2,y2,x3,y3;
	cout<<"Nhap toa do diem A(x1,y1): ";
	cin>>x1>>y1;
	cout<<"Nhap toa do diem B(x2,y2): ";
	cin>>x2>>y2;
	cout<<"Nhap toa do diem C(x3,y3): ";
	cin>>x3>>y3;
	point A(x1,y1),B(x2,y2),C(x3,y3);
	hinhtamgiac ABC(A,B,C); 
	if(ABC.checkTG(A,B,C) == 1)
	{
		cout<<"ABC la hinh tam giac!!"<<endl;
		cout<<"Dien tich tam giac ABC la: "<<ABC.getArea()<<endl;
		cout<<"Chu vi tam giac ABC la: "<<ABC.getPerimeter()<<endl;
	}
	else
		cout<<"ABC khong phai la hinh tam giac."<<endl;
	return 0;
}
                                      // point:
point::point()
{
	
}
point::point(double x,double y)
{
	this->hoanhdo=x;
	this->tungdo=y;
}
void point::setX(double x)
{
	this->hoanhdo=x;
}
void point::setY(double y)
{
	this->tungdo=y;
}
double point::getX()const
{
	return this->hoanhdo;
}
double point::getY()const
{
	return this->tungdo;
}
 
                                         // hinh tam giac:
hinhtamgiac::hinhtamgiac()
{
	
}
hinhtamgiac::hinhtamgiac(point A, point B, point C)
{
	this->A=A;
	this->B=B;
	this->C=C;
}
hinhtamgiac::hinhtamgiac(double x1,double y1,double x2,double y2,double x3,double y3)
{
	this->A.setX(x1);
	this->A.setY(y1);
	this->B.setX(x2);
	this->B.setY(y2);
	this->C.setX(x3);
	this->C.setY(y3);
}
// setters:
bool hinhtamgiac::setA(const point &a)
{
	this->A=a;
	return 1;
}
bool hinhtamgiac::setB(const point &b)
{
	this->B=b;
	return 1;
}
bool hinhtamgiac::setC(const point &c)
{
	this->C=c;
	return 1;
}
bool hinhtamgiac::setA(double x1, double y1)
{
	this->A=point(x1,y1);
	return 1;
}
bool hinhtamgiac::setB(double x2, double y2)
{
	this->B=point(x2,y2);
	return 1;
}
bool hinhtamgiac::setC(double x3, double y3)
{
	this->C=point(x3,y3);
	return 1;
}
// getters:
point hinhtamgiac::getA()const
{
	return A;
}
point hinhtamgiac::getB()const
{
	return B;
}
point hinhtamgiac::getC()const
{
	return C;
}
bool hinhtamgiac::checkTG(point A,point B,point C)
{
	double dAB,dBC,dAC;
	dAB=sqrt(pow(B.getX()-A.getX(),2)+pow(B.getY()-A.getY(),2));
	dBC=sqrt(pow(C.getX()-B.getX(),2)+pow(C.getY()-B.getY(),2));
	dAC=sqrt(pow(C.getX()-A.getX(),2)+pow(C.getY()-A.getY(),2));
	if(dAB+dBC>dAC || dAB+dAC>dBC || dAC+dBC>dAB)
		return 1;
	return 0;
}
// methods:
double hinhtamgiac::getArea()const
{
	double dAB,dBC,dAC,p;
	dAB=sqrt(pow(B.getX()-A.getX(),2)+pow(B.getY()-A.getY(),2));
	dBC=sqrt(pow(C.getX()-B.getX(),2)+pow(C.getY()-B.getY(),2));
	dAC=sqrt(pow(C.getX()-A.getX(),2)+pow(C.getY()-A.getY(),2));
	p=(dAB+dAC+dBC)/2;
	return sqrt(p*(p-dAB)*(p-dBC)*(p-dAC));
}
double hinhtamgiac::getPerimeter()const
{
	double dAB,dBC,dAC;
	dAB=sqrt(pow(B.getX()-A.getX(),2)+pow(B.getY()-A.getY(),2));
	dBC=sqrt(pow(C.getX()-B.getX(),2)+pow(C.getY()-B.getY(),2));
	dAC=sqrt(pow(C.getX()-A.getX(),2)+pow(C.getY()-A.getY(),2));
	return dAB+dBC+dAC;
}
