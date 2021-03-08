#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,opt;
    cout<<"1. ADD"<<endl <<"2. SUBTRACT"<<endl <<"3. MULTIPLY"<<endl<<"4. DIVIDE";
    cin>>opt;
    cout<<"enter 2 numbers";
    
    cin>>a>>b;
    switch (opt)
    {
    case 1:
        c=a+b;
        break;
    case 2:
        c=a-b;
        break;
    case 3:
       c=a*b;
       break;

    case 4:
       c=a/b;
       break;

    
    }
    cout<<"the result is "<<" "<<c;
    return 0;

}