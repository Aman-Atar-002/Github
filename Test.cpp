#include<iostream>
using namespace std;
void Sub(int x,int y)
{
    cout<<"Substraction of two numbers is :- "<<x-y;
}

int main()
{
    int a,b,choice;
    cout<<"Enter two numbers:-";
    cin>>a>>b;
    cout<<"\nAddition of two numbers is:- "<<a+b;
    cout<<"\nDo you want to subtract as well ?";
    cin>>choice;
    if(choice==1)
    {
        exit;
    }
    else
    {
        Sub(a,b);
    }
}