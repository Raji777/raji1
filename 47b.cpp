#include <iostream>
using namespace std;
int main() 
{
	int a[100];
	int s,b;
	int i,n;
	
	cin>>n;
	for(i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	s=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<s)
		{
			s=a[i];
		}
	}
	b=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>b)
		{
			b=a[i];
		}
	}
	cout<<s<<" "<<b;
	return 0;
}
