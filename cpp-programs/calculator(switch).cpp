#include <iostream>
using namespace std;
int main()
{
double a,b;
char op;
cout<<"enter two numbers:";
cin>>a>>b;
cout<<"enter the operater:";
cin>>op;
switch (op)
{
    case '+':
    cout<<"result"<<a+b;
    break;
    case '-':
    cout<<"result"<<a-b;
    break;
    case '*':
    cout<<"result"<<a*b;
    break;
    case '/':
    if(b==0)
    cout<<"cannot divided by 0";
    else
    cout<<"result"<<a/b;
    break;
    default:
    cout<<"invalid operator";
}
return (0);
}