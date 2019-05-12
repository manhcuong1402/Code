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

int main()
{
	point P(14,2);
	cout<<"("<<P.getX()<<","<<P.getY()<<")"<<endl;
}

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




