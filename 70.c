#include <stdio.h>
#include<math.h>
int main()
{    int n,i,n1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    n1=pow(2,i);
    if(n1>n)
    {
        n2=i;
        break;
    }
}
    printf("%d",n1);

    return 0;
}
