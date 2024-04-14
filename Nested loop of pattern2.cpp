#include<iostream>
using namespace std;

int main()
{
 for(int x=1; x<=5;x++)
   {  for(int j=1;j<=x;j++)
       cout<<x << "  ";
       cout<< endl; // this works for the first for loop
  }
    return 0;
}