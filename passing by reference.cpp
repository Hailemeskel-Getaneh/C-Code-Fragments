#include<iostream>
using namespace std;
int global=10;
void func(int &x,int y)
{x=x-y;
  y=x*10;
  cout<<x<<" , "<<y<<endl;
}
int main()
{     int global=7;
     func(::global,global);
    cout<<global<<" , "<<::global<<endl;
    func(global,::global);
   cout<<global<<" , "<<::global<<endl;
    return 0;
}