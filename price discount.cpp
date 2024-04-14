#include<iostream>
using namespace std;

int main()
{
     float totalexpense, quantity ,unitprice;
     char response;
     do
     {
    cout << "Enter the quantity  you need " << endl;
     cin>>quantity ;
     cout<<" enter the unit price "<<endl;
     cin>>unitprice;
     totalexpense=quantity*unitprice;
     if ( totalexpense> 5000)
        cout<<" the total expense is "<<totalexpense-totalexpense*0.1;
        else
        cout<<" the total expense is "<< totalexpense<<endl<<endl;
        cout<<endl<<" do you want to continue ?  please enter y or Y";
        cin>>response;
        }
        while(response=='y' || response=='Y');
    return 0;
}