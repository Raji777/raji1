#include <iostream>
using namespace std;
int main()
{
int min,min1,hr;
cout<<"enter min";
cin>>min;
if(min<60)
{
	cout<<min;
}
else if(min>60)
{
	hr=min/60;
	min1=min%60;
	cout<<hr<<":"<<min1;
}
	return 0;
}
