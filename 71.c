#include <stdio.h>
#include<string.h> 
int main()
{
    char s[100];
    int i,j,c=0,f=0;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        c++;
    }
    for(i=0,j=c-1;i<c,j>=0;i++,j--)
    {
            if(s[i]!=s[j])
            {
            f=1;
            break;
            }
           }
    if(f==0)
    printf("yes");
    else
    printf("no");
    return 0;
}
