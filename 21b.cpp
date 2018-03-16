#include <iostream>
using namespace std;

int main() 
{
	int first,diff,terms,value,sum=0,i,temp=0;
	cin>>terms;
	cin>>first>>diff;
	value=first;
	cout<<"ap series";
	for(i=0;i<terms;i++)
	{
	cout<<value;
	sum+=value;
	value=value+diff;
	}
	while(i<terms)
	{
	temp+=value;
	cout<<temp;
	}
	return 0;
}
