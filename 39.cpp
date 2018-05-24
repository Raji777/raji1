#include <iostream>
using namespace std;

int main() 
{
	int i,n,large=0,num;
	cout<<"enter n"<<endl;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		cin>>num;
		if(num>large)
		{
			large=num;
		}
	}
	cout<<large;
	
	return 0;
}
