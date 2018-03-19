#include <iostream>
using namespace std;
int main() 
{
	int i,a[100],n;
	cout<<"enter n";
	cin>>n;
	for(i=0;i<n;i++)
	{   cin>>a[i];
		cout<<a[i];
	}
	for(i=1;i<n;++i)
	{
		if(a[0]>a[i])
		a[0]=a[i];
		cout<<endl;
	}
	cout<<a[0];
	return 0;
}
