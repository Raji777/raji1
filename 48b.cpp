#include<iostream>
using namespace std;
int main()
{
    int n,i,a[20];
    float total=0,avg;
    cin>>n ;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        total=total+a[i];
    }
    avg=total/n;
    cout<<avg;
    return 0;
}
