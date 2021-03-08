#include <iostream>
using namespace std;
int main()
{
    int a,b,rev;
    rev=0;
    cout<<"enter the number you want to reverse";
    cin>>a;
    while (a>0)
    {
        b=a%10;
        a=a/10;
        rev=rev*10+b;
    }
    cout<<"the reverse is "<<rev;
    return 0;
    

}