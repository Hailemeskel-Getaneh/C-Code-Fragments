#include<iostream>
using namespace std;

int main()
{   int days,y,m,d;
cout<<"Enter no. of days : ";
cin>>days;
y=days/365;
days=days%365;
m=days/30;
d=days%30;
cout<<"Years : "<<y<<"\nMonths : "<<m<<"\nDays : "<<d;
    return 0;
}