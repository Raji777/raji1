#include <stdio.h>

int main()
{
    int i,a[11],j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<10;i++)
     {
          for(j=i+1;j<10;j++)
          {
              if(a[i]>a[j])
              {
                  a[i]=a[j];
                  a[j]=a[j+1];
              }
          }
     }
 for(i=0;i<10;i++)
 {
     printf("%d",a[0]);
     break ;
 }
    return 0;
}
