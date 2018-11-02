#include <stdio.h>

int main()
{   char s[100];
int a,i,c=0,n,n1;
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
    c++;
}
if(c%2!=0)
{
  n=c/2;
        s[n]='*';
     printf("%s",s);
     }
  else
  {
      n=c/2;
      n1=n-1;
       s[n]='*';
        s[n1]='*';
        printf("%s",s);
  }
    return 0;
}
