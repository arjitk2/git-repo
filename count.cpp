#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int count;
    count=0;
    long n;
    cout<<"enter a number";
    cin>>n;
    while(n!=0)
      {n=n/10;
      ++count;
      }
    cout<<count;  
}