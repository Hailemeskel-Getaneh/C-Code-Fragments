#include<iostream>
using namespace std;

int main()
{
 int a[4][4],  i, j;
 cout<<"Enter 4x4 integer matrix: ";
 for (int i=0; i<4; i++)
 for (int j=0; j<4; j++)
 cin>>a[i][j];
cout<<"Matrix before exchanging  : "<<endl;
 for (i=0; i<4; i++)
 {
 for (j=0; j<4; j++)
 cout<<a[i][j]<<" ";
 cout<<endl;
 }
 
 for (i=0; i<4; i++)
 {
 int temp = a[0][i];
 a[0][i] = a[2][i];
 a[2][i] = temp;
 }
 cout<<"Matrix after exchanging row3 with row1:"<<endl;
 for (i=0; i<4; i++)
 {
 for (j=0; j<4; j++)
 cout<<a[i][j]<<" ";
 cout<<endl;
 }

       
            
    return 0;
}