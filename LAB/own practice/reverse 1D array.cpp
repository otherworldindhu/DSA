#include<iostream>
using namespace std;
int main()
{
    int i,n,a[20];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=n-1;0<=i;i--)
    {
        cout<<a[i]<<" ";
    }
return 0;
}
