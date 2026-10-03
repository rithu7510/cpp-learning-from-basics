#include <iostream>
using namespace std;
int main()
{
    double bill;
    double units;
    cout<<"enter the units:";
    cin>>units;
    if (units<=100)
    bill=units*5;
else if(units<=200)
bill=100*5+(units-100)*7;
else
bill=100*5+100*7+(units-200)*10;
cout<<"total bill: "<<bill<<endl;
return(0);
}