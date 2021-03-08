#include <iostream>

using namespace std;
int main()
{
    int a;
    int b;
    int c;
    int d;
    d=0;
    cout<<"enter three no";
    cin>>a>>b>>c;
    if(a>b && a>c)
      cout<<a<<" is largest";
    else
    {
        if(b>c)
          cout<<b<<" is largest";
        else 
          cout<<c<<"is largest";  
    }     
    return 0;
       
}