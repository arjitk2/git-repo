#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int n=1;
   for (int  i = 1; i <=5; i++)
   {
       for (int j = 1; j <=n; j++)
       {
           cout<<" ";
       }
       n++;
       for (int  k = 4; k >=i; k--)
       {
           cout<<"* ";
       }
       cout<<endl;
       
       
   }
   
    
}