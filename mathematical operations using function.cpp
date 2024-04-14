#include<iostream>
using namespace std;
void add(int a, int b)
{  float sum= a+b;
  cout<<" sum : "<<sum<<endl;
}
void multiplication (int a, int b)
{  float product= a*b;
  cout<<" product : "<<product<<endl;
}
void subtraction (int a, int b)
{  float difference = a-b;
  cout<<" difference : "<<difference<<endl;
}
void division (int a, int b)
{  if(b!=0)
  {float quotient = a/b;
    cout<<" quotient : "<<quotient<<endl;
    }
    else
      cout<<" division  by zero is not possible";

}
int main()
{     float x,y;
     cout<<" enter two numbers :"<<endl;
     cin>>x>>y;
     add(x,y);
     subtraction (x,y);
    multiplication (x, y);
    division (x,y);
   
    return 0;
}