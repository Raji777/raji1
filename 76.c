#include <stdio.h>

int main()
{    int n,f=0,i,n1;
     scanf("%d",&n);
     n1=n/2;
     for(i=2;i<n1;i++)
     {
         if(n%i==0)
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
