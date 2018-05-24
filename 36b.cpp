#include<string.h>
using namespace std;
int main()
{
	int i,count=0,space=0;
	char s[100];
	cout<<"enter string";
	cin>>s;
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>='0')&&(s[i]<='9'))
		{
		count++;
		}
	
	}
	cout<<count;
	return 0;
}
