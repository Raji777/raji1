#include <stdio.h>

int main()
{    int n,n1,r,s,n2;
scanf("%d",&n);
while (n>0)
{
r=n%10;
n1=(n1*10)+r;
n=n/10;
}
s=n1;
while(s>0)
{
n2=s%10;
printf("%d ",n2);
s=s/10;
}
    return 0;
}
