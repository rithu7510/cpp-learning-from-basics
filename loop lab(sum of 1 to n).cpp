#include <iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter N:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
        cout<<"sum of N="<<sum;
    return(0);
}
