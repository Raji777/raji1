#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main() 
{
int count=0,len;
string s;
cout<<"enter string";
getline(cin,s);
len=s.length();
for(int i=0;i<=len;i++)
{
	if(s[i]==' ')
	{
		count++;
	}
}
	cout<<count;
return 0;
}
