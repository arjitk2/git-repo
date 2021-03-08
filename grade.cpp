#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    float a,b,c,d,e,pnt;
    cout<<"enter the marks scored in the 5 subjects";
    cin>>a>>b>>c>>d>>e;
    pnt=(a+b+c+d+e)/5;
    if(pnt>=90)
      cout<<"grade is A";
    else 
    {
        if(pnt>=80 && pnt<=89)
          cout<<"grade is B";
        else
        {
            if(pnt>=60 && pnt<=79)
              cout<<"grade is C";
            else
            {
                if(pnt>=33 && pnt<=59)
                  cout<<"grade is D";
                else
                  cout<<"grade is F";
                
                
                  
            }
              
        }
          
    }

}