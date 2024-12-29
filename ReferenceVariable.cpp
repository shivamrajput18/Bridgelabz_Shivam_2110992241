#include<iostream>

using namespace std;
int main()
{
    int x=5;
    
    int *p;
    p=&x;
    cout<<p<<endl;

//Reference Variable
    int &y=x;
    y++;
    cout<<y<<" "<<x;
    
   return 0;
} 
