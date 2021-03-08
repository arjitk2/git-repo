#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,rev;
    cout<<"enter the number";
    cin>>a;
    c=a;
    rev=0;
    while (a>0)
    {
        b=a%10;
        a=a/10;
        rev=rev*10+b;
    }
    if(rev==c)
      cout<<c<<" "<<"is a palindrome";
    else
    {
         cout<<c<<" "<<"is not a palindrome";
    }
      
    
     


}