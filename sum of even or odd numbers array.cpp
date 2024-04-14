#include<iostream>
using namespace std;

int main()
{   int num[10],sum_of_evens=0,sum_of_odds=0;
  for ( int i=0; i<=9;i++)
       {
         cout << "Enter  a number  : " << endl;
         cin>>num[i];
       }
      
        for( int i=0; i<=9; i++)
         {  if(num[i]%2==0)
            sum_of_evens+=  num[i];
           else
            sum_of_odds +=num[i];
         }
        cout<<" The sum of even numbers is  "<<sum_of_evens<<endl;
       cout<<" The sum of 0dd numbers is  "<<sum_of_odds;
        
    return 0;
}