#include <bits/stdc++.h>
using namespace std;
class Time
{
private:
    int hour;
    int mins;
    int secs;
public:
    Time();
    Time(int, int, int);
    //setters:
    bool setTime(int,int,int);
    bool setHour(int);
    bool setMins(int);
    bool setSecs(int);
    //getters:
    int getHour()const;
    int getMins()const;
    int getSecs()const;
    //methods:
    void print()const;
    int convertTimetoSecs()const;
    double convertTimetoMins()const;
};
int main()
{
	Time T(14,02,35);
	cout<<"Thoi gian T la: ";
	T.print();
	cout<<"Thoi gian T chuyen sang giay la: ";
	cout<<T.convertTimetoSecs()<<"s"<<endl;
	cout<<"Thoi gian T chuyen sang phut la: ";
	cout<<T.convertTimetoMins()<<"'"<<endl;
	return 0;
}

Time::Time()
{
    this -> hour=0;
    this -> mins=0;
    this -> secs=0;
}
Time::Time(int h, int m, int s)
{
	this->hour=h;
	this->mins=m;
	this->secs=s;
}

bool Time::setTime(int h,int m,int s)
{
    return setHour(h) && setMins(m) && setSecs(s);
}

bool Time::setHour(int h)
{
    if(h>=0 && h <24)
    {
        this -> hour = h;
        return 1;
    }
    return 0;
}
//setters:
bool Time::setMins(int m)
{
    if(m>=0 && m <60)
    {
        this -> mins = m;
        return 1;
    }
    return 0;
}

bool Time::setSecs(int s)
{
    if(s>=0 && s <60)
    {
        this -> secs = s;
        return 1;
    }
    return 0;
}
//getters:
int Time::getHour()const
{
    return this -> hour;
}

int Time::getMins()const
{
    return this -> mins;
}

int Time::getSecs()const
{
    return this -> secs;
}
//methods:
void Time::print()const
{
    cout<<this->hour<<"h:"<<this->mins<<"':"<<this->secs<<"s"<<endl;
}

int Time::convertTimetoSecs()const
{
    return  this->hour*60*60 + this -> mins * 60 + this -> secs;
}

double Time::convertTimetoMins()const
{
    return  this->hour*60 + this -> mins + this -> secs/60.0;
}
