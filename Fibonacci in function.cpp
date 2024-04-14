#include<iostream>
//#include<cmath>
using namespace std;
 void calculate(float x)
 {  float sum=0;
  if( x==1 || x==0)
   cout<<x;
   else
   {
   
  int b=0, c=1;
        int i = 0;
  while ( i<=x)
       {
       sum=sum+i;
 //     cout<<" "<< i;
         i= b+c;
          b =c;
         c=i;
       }
  
 }
cout<<sum;
 }
int main()
{  float a;
cout<<" enter the posetive number   : ";
cin>>a;
    calculate (a);
    cout<<endl;
    return 0;
}