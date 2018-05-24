#include <iostream>
#include<string.h>
using namespace std;
int main() 
{
int len,count=0;
char s[20];
cout<<"enter string";
getline(cin,s);
len=s.lenght();
for(int i=0;i<=len;i++)
{
	if(s[i]=='.')
	{
		count++;
	}
}
cout<<count;
return 0;
}
