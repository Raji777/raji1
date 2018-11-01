#include <stdio.h>

int main()
{   int n,f=1,i;
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
    if(n%i==0)
    {
        f=0;
        break;
    }
}
if(f==1)
printf("yes");
else
printf("no");
return 0;
}
