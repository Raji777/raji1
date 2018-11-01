#include <stdio.h>
#include<string.h> 
int main()
{
    int n,l,r,f=0,i;
   scanf("%d",&n);
    scanf("%d %d",&l,&r);
    for(i=l;i<=r;i++)
    {
        if(i==n)
        {
        f=1;
        break;
        }
    }
    if(f==1)
    printf("yes");
    else
    printf("no");
    return 0;
}
