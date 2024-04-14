#include<iostream>
#include<cmath>
using namespace std;
 void calculate(float y, float x, int n)
 {
  float sum= 5;
  for( int i=1;i<=n; i++)
  sum=sum+( y/pow(x,i));
 cout<<" Sum :"<<sum<<endl;
 
 }
int main()
{  float a,b,c;
cout<<" enter the numinator   : ";
cin>>a;
cout<<" Enter the  denominator : ";
cin>>b;
cout<<" Enter the last power of series  numinator : ";
cin>>c;
    calculate (a,b,c);
    cout<<endl;
    return 0;
}