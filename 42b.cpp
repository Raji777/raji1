#include <iostream>
#include<string.h>
using namespace std;

int main() 
{   char s1[100],s2[100];
    int n1,n2;
    cout<<"enter two strings"<<endl;
    cin>>s1>>s2;
    n1=strlen(s1);
    n2=strlen(s2);
    if(n1>n2)
    {
    	cout<<s1;
    }
    else
    {
    	cout<<s2;
    }
	return 0;
}
