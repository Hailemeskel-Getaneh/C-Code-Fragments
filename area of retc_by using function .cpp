#include<iostream>
using namespace std;
float Area(float l, float w)
{ float area=l*w;
   return area;
   }
int main()
{
   float x,y;
    cout << "enter the length of the rectangle " << endl;
    cin>>x;
   cout << "enter the width of the rectangle " << endl;
    cin>>y;
   float area=  Area(x,y);
   cout<<" the area is : "<<area;
    return 0;
    }
    /*with out return 
    
   void Area(float l, float w)
{ float area=l*w;
   cout<<" the area is : "<<area;
   }
int main()
{
   float x,y;
    cout << "enter the length of the rectangle " << endl;
    cin>>x;
   cout << "enter the width of the rectangle " << endl;
    cin>>y;
    Area(x,y);
   
    return 0;
    }
    */
    
    
    //by using function prototype or function declaration 
    /*
   float Area(float l, float w);
int main()
{
   float x,y;
    cout << "enter the length of the rectangle " << endl;
    cin>>x;
   cout << "enter the width of the rectangle " << endl;
    cin>>y;
   float area=  Area(x,y);
   cout<<" the area is : "<<area;
    return 0;
    }
    {
   float Area(float l, float w);
{ float area=l*w;
   return area;
   }
    }*/
    

