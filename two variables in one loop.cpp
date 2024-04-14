#include<iostream>
using namespace std;

int main()
{ 
 int z=1;
 for(int x=3,y=1 ; x>y && y<=z ; z++,x--)
   { 
       cout << "x  : " <<x << endl;
       cout << "y  : " <<y << endl;
      cout << "z  : " <<z << endl;
  }
    return 0;
}