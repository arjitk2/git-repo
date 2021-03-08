#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[20];
    cin>>s1;
    int i,length,count=0;
    length=strlen(s1);
    for(int i=0;i<length;i++)
    {
        if(s1[i]==s1[length-i-1])
        {
            cout<<s1[length-i-1];
            
            count++;
        }
        else
        {
            cout<<"not a palindrome ";
            break;
        }
        
          
    }
    if(count==length)
    {
         cout<<"  it is a palindrome";
    }
    
    
    
}