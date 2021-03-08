#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,i,z;
    i=2;
    z=3;
    cout<<"enter a no";
    cin>>a;
    if(a<=1)
      cout<<"false";
    else
    {
        if(a%2==0)
          cout<<"false";
        else
        {
            if(a%3==0)
              cout<<"false";
            else
            {
            cout<<"true";
            }
              
        }  
    }
      
}