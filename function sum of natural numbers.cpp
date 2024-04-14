#include<iostream>
#include<cmath>
using namespace std;
 void calculate(float x)
 {
  float sum= 0;
  for( int i=1;i<=x; i++)
  sum=sum+i;
 cout<<" Sum :"<<sum<<endl;
 
 }
int main()
{  float a;
cout<<" enter the posetive number   : ";
cin>>a;
    calculate (a);
    cout<<endl;
    return 0;
}