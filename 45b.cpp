#include<iostream>
using namespace std;
int main()
{
int num,count=0;
cout<<"enter num";
cin>>num;
  if(num<0)
{
num=num*-1;
}
while(num>0)
{
num=num/10;
count++;
}
cout<<"no of digits in a num is"<<count;
return 0;
}
