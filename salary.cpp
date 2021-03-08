#include <iostream>
using namespace std;
int main()
{
    float bs;
    float poa;
    float ddt;
    float ns;
    cout<<"enter the basic salary of employee"<<endl;
    cin>>bs;
    cout<<"enter the percentage of allowance "<<endl;
    cin>>poa;
    cout<<"enter the deduction in salary"<<endl;
    cin>>ddt;
    ns=bs+(bs*poa)/100-(bs*ddt)/100;
    cout<<"your net salary is "<<endl<<ns;
    return 0;
    


}