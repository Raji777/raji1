#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
	b=a+b;
	a=b-a;
	b=b-a;
}
int main() 
{           int a,b;
	cout<<"enter numbers";
	cin>>a>>b;
	swap(a,b);
	cout<<a<<b;
	return 0;
}
