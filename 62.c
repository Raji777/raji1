#include <stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int i,k,s1;
    scanf("%s",s);
    k=strlen(s);
        for(i=0;i<k;i++)
    {
        if((s[i]=='1')||(s[i]=='0'))
        s1=1;
        else
        s1=0;
    }
    if(s1==1)
    printf("yes");
    else
    printf("no");
    
    return 0;
}
