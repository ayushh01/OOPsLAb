#include<iostream>
using namespace std;
int factorial(int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
{
    fact=fact*i;
}
return fact;
}

int main()
{
int a,fact;
cout<<"enter the number";
cin>>a;
fact=factorial(a);
cout<<fact;
return 0;
}
