#include <iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter two numbers:";
cin>>a>>b;
if(a>b)
{
    cout<<"greater number is"<<a;
}
else if(b>a)
{
    cout<<"greater number is"<<b;
}
else
{
    cout<<"both number are equal";
}
return(0);
}