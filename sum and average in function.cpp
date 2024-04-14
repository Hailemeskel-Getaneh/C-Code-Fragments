#include<iostream>
using namespace std;
 void calculate(float x, float y, float z)
 {
  float sum= x+y+z;
  float average=(x+y+z)/3;
 cout<<" Sum :"<<sum<<endl;
 cout<<" Average : "<<average;
 }
int main()
{  float a,b,c;
cout<<" enter three numbers : ";
cin>>a>>b>>c;
    calculate (a,b,c);
    cout<<endl;
    return 0;
}