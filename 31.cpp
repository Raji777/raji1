#include <iostreamh>
#include <stdio.h>
#include<string.h>
int main()
{
char str[30];
int i=0,count=0;
  cout<<"enter the string";
  cin>>str
while(str[i]!='\0')
{
if(!(str[i]==32))
{
++count;
}
++i;
}
cout<<"no of characters is d "<<count);
    return 0;
}


