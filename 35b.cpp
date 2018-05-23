#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char    s[100];
    int cd,ca,csc,cs;
    int i;
    cd=ca=csc=cs=0;
   cout<<"Enter a string: ";
   cin>>s;
 
    for(i=0;s[i]!=NULL;i++)
    {
 
        if(s[i]>='0' && s[i]<='9')
            cd++;
        else if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
            ca++;
        else if(s[i]==' ')
            cs++;
        else
            csc++;
    }
 
   cout<<csc;
    return 0;
}
