#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a,b,c,d,n;
	c=0;
	n=0;
  cout<<"enter number";
	cin>>a;
	d=a;
	while(a>0)
	{
	    a=a/10;
	    n++;
	}
	a=d;
	while(a>0)
	{
	    b=a%10;
	    a=a/10;
	    c=c+pow(b,n);
	}
	cout<<c;
		if(d==c)
	  cout<<"true";
	else
	  cout<<"false";

	return 0;
}
