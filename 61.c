#include <stdio.h>

int main()
{
    char s[100];
    int i,k;
    scanf("%s",s);
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        printf("%c",s[i]);
    }

    return 0;
}
