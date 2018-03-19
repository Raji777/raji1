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
	if(n%2==0)
     {
        cout<<((a[n/2]+a[(n/2)-1])/2);
     }
     else
     {
         cout<<(a[(n-1)/2]);
     }
	return 0;
}
