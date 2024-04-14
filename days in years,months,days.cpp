#include<iostream>
using namespace std;

int main()
{
    int years, months, Days,TotalDays;
    
   
    cout << "please enter the number of days :" << endl;
    cin>>TotalDays;
    if (TotalDays>0)
    {
    years=TotalDays/365;
    TotalDays=TotalDays%365;
    months=TotalDays/30;
    TotalDays=TotalDays%30;
    Days=TotalDays;
    TotalDays=years*365 +months*30 +Days;
    cout<<TotalDays<<" days : "<<" means "<< years<<" years "<<months<<" months "<< Days<<" days ";
    }
    else
    cout<<" invalid number of days. please enter again";;
    return 0;
}