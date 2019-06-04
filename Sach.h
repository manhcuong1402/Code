#pragma once;
#include<bits/stdc++.h>
using namespace std;
class Book{
protected:
    string name;
    int yearSX;
    float heso;
public:
    Book();
    Book(string,int,float);
    //setters:
    bool setName(string);
    bool setYear(int);
    bool setHeso(float);
    //getters:
    string getName()const;
    int getYear()const;
    float getHeso()const;
    //methods:
    virtual float getGiathanh()const=0;
    void Print()const;
};
Book::Book(){}
Book::Book(string name,int year,float heso)
{
    name=name;
    year=year;
    heso=heso;
}
bool Book::setName(string name){
    name=name;
}
bool Book::setYear(int year){
    yearSX=year;
}
bool Book::setHeso(float heso){
    heso=heso;
}
string Book::getName()const
{
    return name;
}
int Book::getYear()const
{   
    return yearSX;
}
float Book::getHeso()const
{
    return heso;
}
void Book::Print()const
{
    cout<<name<<" "<<yearSX<<" "<<getGiathanh()<<endl;
}