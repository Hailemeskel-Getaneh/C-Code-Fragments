#include<iostream>
using namespace std;

int main()
{
  /*
  int x=1 ,sum=0;
  int n;
    cout<<" please enter a positive number";
    cin>>n;
  /*
  do
   {
   sum=sum+x;
   x+=1;
   }
   while(x<=n);
    cout<<" sum : "<<sum;
    
    while(x<=n)
        { sum+=x;
          x++;
       }
   cout<<" sum : "<<sum;
   
   */
   
   // The following is nested while loop
   
   int y=1;
   while(y<=10)
   {
   
  int x=1 ,sum=0;
  int n;
    cout<<" please enter a positive number\n";
    cout<<"  " ;
    cin>>n;
  while(x<=n)
        { sum+=x;
          x++;
       }
   cout<<" sum : "<<sum<<endl;
   y++;
   }
   
    return 0;
}