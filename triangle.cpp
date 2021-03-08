#include <iostream>
using namespace std;
int  main()
{
    for (int i = 0; i <5 ; i++)
    {
        for (int j = 0; j <5; j++)
        {
           if(i>=j)
             cout<<"* ";
              
        }
        cout<<endl;
    }
    cout<<endl;
    for (int  a = 0; a < 5; a++)
    {
        for (int b = 0; b < 5; b++)
        {
            if(a+b>=4)
              cout<<"* ";
            else 
              cout<<"  ";

        }
        cout<<endl;
    }
    cout<<endl;
    for (int x = 0; x < 5; x++)
    {
        for (int  y = 0; y < 5; y++)
        {
            if(x+y<=4)
              cout<<"* ";
            else 
              cout<<"  ";  
        }
        cout<<endl;
        
    }
    cout<<endl;
    for (int p = 0; p < 5; p++)
    {
        for (int  q = 0; q < 5; q++)
        {
            if(p<=q)
              cout<<"* ";
            else  
              cout<<"  ";  
        }
        cout<<endl;
        
    }
    
    
}
