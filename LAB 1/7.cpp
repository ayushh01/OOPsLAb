#include<iostream>
using namespace std;
int main()
{
string s,t;
int i,c=0,j;
cout<<"enter 1st string";
cin>>s;
cout<<"enter 2nd string";
cin>>t;
for(s[i]='\0';i>0;i--)
{
    for(t[j]='\0';j>0;j--)
    {
if(s[i]==t[j])
{
c++;
}
}
}
if(c>=1)
{
cout<<"1";
}
else;
{cout<<"0";
}
}
