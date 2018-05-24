#include <iostream>
using namespace std;
int main()
{
int i,a[20],n;
cin>>n;
for(i=0;i<=n;i++)
{
	cin>>a[i];
}
for(i=0;i<=n;i++)
{
	cout<<a[i]<<'\t'<<i<<endl;
}
	return 0;
}
