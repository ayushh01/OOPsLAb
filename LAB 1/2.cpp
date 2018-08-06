#include<iostream>
using namespace std;
int main()
{
	int n,i=0;
	cout<<"enter value\n";
	cin>>n;
	while(n!=0)
	{
		 n%10;
		 i++;
		 n=n/10;
	 } 
	 	 cout<<i;
}
