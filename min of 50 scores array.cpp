#include<iostream>
using namespace std;

int main()
{   float score[50], min=100;
  for ( int i=1; i<=50;i++)
       {
         cout << "Enter the score : " << endl;
         cin>>score[i];
         if(score[i] <min)
           min=score[i];
       }
   cout<<" The minumum score is  : "<<min;
    return 0;
}