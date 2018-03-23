#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	int c=0,i;
    scanf("%[^\n]s",s);
    int l;
    l=strlen(s);
	for (i = 0; i<l; i++)
		if (s[i] == ' ')
		c++;
	printf("%d",c+1);
	return 0;
}
