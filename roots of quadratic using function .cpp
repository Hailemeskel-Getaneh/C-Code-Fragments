#include<iostream>
#include<cmath>
using namespace std;
 void roots(int a, int b, int c)
 {  int  d=(pow(b,2) -4*a*c);
     if ( d>0)
       { float root1=(-b + sqrt(d))/(2*a);
     float root2=(-b - sqrt(d))/(2*a);
      cout<<" the roots are : "<<root1<<" and "<<root2;
      }
      else if( d==0)
      {
       float root1=(-b/(2*a));
     cout<<" the solution  is : "<<root1;
     }
     else 
     cout<<" it has not distinct solution";
 }

int main()
{   int x,y,z;
    cout << "  enter the coefficient of x square" << endl;
    cin>>x;
   cout << "  enter the coefficient of x " << endl;
    cin>>y;
   cout << "  enter the coefficient of x square" << endl;
    cin>>z;
    roots(x,y,z);
    return 0;
}