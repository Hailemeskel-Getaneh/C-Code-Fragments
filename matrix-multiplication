#include<iostream>
using namespace std;
 
int main()
{


  int A[2][2]  , B[2][2] ;
  int C[2][2] ;
  for( int i = 1 ; i<= 2; i++)
        for(int j =1 ; j<= 2 ; j++)
            {
             cout<<" enter the value of "<<"A["<< i  <<"]["<<j <<"]"<<endl;
             cin>>A[i][j];
            
            }
            
for( int i = 1 ; i<= 2; i++)
        for(int j =1 ; j<= 2 ; j++)
            {
               cout<<" enter the value of "<<"B["<< i  <<"]["<<j <<"]"<<endl;
             cin>>B[i][j];
            
            }
            
for( int i = 1 ; i<= 2; i++)
      {
         for(int j =1 ; j<= 2 ; j++)
            {
                C[i][j]=0;
               for ( int k = 1; k<=2; k++)
               
                C[i][j] +=A[i][k] * B[k][j];
            }
       }     
  for(int j =1 ; j<= 2 ; j++)
            {
               for ( int k = 1; k<3 ; k++)
           {     cout<<  C[j][k]<< "    ";
                
            }
         cout<<endl;
       }     
       
       cout<<endl;
       cout<<endl;
       
            
    return 0;
}