#include <iostream>
using namespace std;

int main() 
{
	int m1,h1,m2,h2,m3,h3;
    cout<<"Enter the First hrs and mins:";
	cin>>h1>>m1;
	cout<<"Enter the Second hrs and mins:";
	cin>>h2>>m2<<endl;
	h3=abs(h1-h2);
	m3=abs(m1-m2);
	cout<<"The Diffrence of timings is"<<h3,m3;
return 0;
}
