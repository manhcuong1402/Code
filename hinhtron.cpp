#include <bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897;
class point
{
private:
	double hoanhdo,tungdo;
public:
	point();
	point(double x,double y);
	//setter
	void setX(double x);
	void setY(double y);
	//getter
	double getX()const;
	double getY()const;
};
class hinhtron
{
private:
	point I;
	double r;
public:
	hinhtron();
	hinhtron(point I, double r);
	//setter
	bool setC(const point &);
	bool setC(point I);
	bool setR(double r);
	//getters
	point getC()const;
	double getR()const;
	//methods
	double chuvi()const;
	double dientich()const;
};

int main()
{
	point I;
	I.setX(3.0);
	I.setY(5.0);
}

point::point()
{

}
point::point(double x,double y)
{
	this->hoanhdo=x;
	this->tungdo=y;
}
	//setter
void point::setX(double x)
{
	this->hoanhdo=x;
}
void point::setY(double y)
{
	this->tungdo=y;
}
//getter
double point::getX()const
{
	return this->hoanhdo;
}
double point::getY()const
{
	return this->tungdo;
}

hinhtron::hinhtron()
{

}
hinhtron::hinhtron(point I, double r)
{
	this->I=I;
	this->r=r;
}
//setter
bool hinhtron::setC(const point &)
{
	this->I=I;
	return 1;
}

bool hinhtron::setC(point I)
{
	this->I;
	return 1;
}
bool hinhtron::setR(double r)
{
	this->r=r;
	return 1;
}
//getters
point hinhtron::getC()const
{
	return I;
}
double hinhtron::getR()const
{
	return r;
}
//methods
double hinhtron::chuvi()const
{
	return 2*r*PI;
}
double hinhtron::dientich()const
{
	return r*r*PI;
}