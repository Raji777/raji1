#include<iostream>
using namespace std;
int main()
{
     int a,x=1,power=2,count=0;
     cin>>a;
     for(int i=0;i<a;i++)
     {
      x=x*power;
     if(x==a)
     {
     	count=1;
     	break;
     }
     if(x>a)
     break;
     }
     if(count==1)
     {
     	cout<<"yes";
     }
     else
     {
     	cout<<"no";
     }
     return 0;
}
