#include <stdio.h>

int main() 
{
	int n,a,d,value,sum=0,i;
	scanf("%d %d %d",&n,&a,&d);
	value=a;
	for(i=0;i<n;i++)
	{
	sum+=value;
	value=value+d;
	}
	printf("%d",sum);
	return 0;
}
