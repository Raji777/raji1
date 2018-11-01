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
    for(i=0;i<c;i++)
    {
            if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
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
