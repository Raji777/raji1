#include <iostream>
#include<string.h>
using namespace std;
int main() 
{
int count=0;
char s[20],len;
cout<<"enter string";
cin>>s;
len=strlen(s);
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
