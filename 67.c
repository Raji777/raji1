#include <stdio.h>

int main()
{   int n;
scanf("%d",&n);
while(1)
{
if(n%10==0)
{
    printf("%d",n);
    break;
}
    else
     n++;
}
return 0;
}
