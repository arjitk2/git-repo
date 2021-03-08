#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    a=0;b=1;
    c=10;
    while (c>0)
    {
        cout<<" "<<a<<" "<<b<<" ";
        a=a+b;
        b=a+b;
        c--;
    }
    
}