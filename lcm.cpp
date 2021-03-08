#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,i;
    i=0;
    cout<<"enter 2 no";
    cin>>a>>b;
    int max;
    max=a>b;
    if(max==1)
      max=a;
    else 
       max=b;
       
    for (int i = 0; i < a*b; i++)
    {
          if(max%a==0 && max%b==0)
            break;
             
        else
           max++;
    }
    cout<<"lcm is "<<" "<<max; 
    return 0;
}
