#include <iostream>
using namespace std;
int main() 
{
	int i,j,a[100],n,temp;
	cout<<"enter n";
	cin>>n;
	for(i=0;i<n;i++)
	{   cin>>a[i];
		cout<<a[i];
	}
for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Sorted (Ascending Order) Array elements:"<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
	cout<<endl;	
	return 0;
}
