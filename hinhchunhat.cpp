#include <bits/stdc++.h>
using namespace std;
class Point
{
private:
	double hoanhdo, tungdo;

public:
	Point()
	{

	}
	Point(double x,double y)
	{
		this->hoanhdo=x;
		this->tungdo=y;
	}
	//setters
	void setX(double x)
	{
		this->hoanhdo=x;
	}
	void setY(double y)
	{
		this->tungdo=y;
	}
	//getters
	double getX()const
	{
		return this->hoanhdo;
	}
	double getY()const
	{
		return this->tungdo;
	}
};

class HCN
{
private:
	Point tf,br;
public:
	HCN()
	{
		this->tf.setX(0.0);
		this->tf.setY(0.0);
		this->br.setX(0.0);
		this->br.setY(0.0);
	}

	HCN(Point tf, Point br)
	{
		this->tf=tf;
		this->br=br;
	}
	HCN(double x1, double y1, double x2, double y2)
	{
		this->tf.setX(x1);
		this->tf.setY(y1);
		this->br.setX(x2);
		this->br.setY(y2);

	}
	//setters
	bool settf(const Point &x)
	{
		this->tf=x;
		return 1;
	}
	bool setbr(const Point &y)
	{
		this->tf=y;
		return 1;
	}
	bool settf(double x1,double y1)
	{
		this->tf=Point(x1,y1);
		return 1;
	}
	bool setbr(double x2,double y2)
	{
		this->br=Point(x2,y2);
		return 1;
	}
	//getters
	Point gettf()const
	{
		return tf;
	}
	Point getbr()const
	{
		return br;
	}
	//methods
	double getArea()const
	{
		double dai,rong;
		dai=abs(br.getX()-tf.getX());
		rong=abs(tf.getY()-br.getY());
		return dai*rong;
	}
	double getPerimeter()const
	{
		double dai,rong;
		dai=abs(br.getX()-tf.getX());
		rong=abs(tf.getY()-br.getY());
		return (dai+rong)*2.0;
	}
};
int main()
{
	Point a;
	a.setX(3.0);
	a.setY(4.0);
	Point b(5.0,6.0);
	cout<<"Toa do cua diem A la: "<<a.getX()<<" "<<a.getY()<<endl;
	cout<<"Toa do cua diem B la: "<<b.getX()<<" "<<b.getY()<<endl;
	HCN hcn(a,b);
	//hcn.settf(3,4);
	//hcn.setbr(5,6);
	cout<<"Dien tich hinh chu nhat la: "<<hcn.getArea()<<endl;
	cout<<"Chu vi hinh chu nhat la: "<<hcn.getPerimeter()<<endl;
	return 0;
}
