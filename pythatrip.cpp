#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c,x,y,z;
    cout<<"enter the dimensions ";
    cin>>a>>b>>c;
    x=a*a;
    y=b*b;
    z=c*c;
    if(x==y+z||y==x+z||z==x+y)
      cout<<"true";
    else
    {
          cout<<"false";
    }
    return 0;
    
      

    
    
   
      

}