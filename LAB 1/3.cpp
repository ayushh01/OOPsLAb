#include<iostream>
using namespace std;
int main()
{
	int A,B,C,D,i=32,sq;
	while((sq=i*i)<=9999)
	{
		A=sq/1000;
		B=(sq%1000)/100;
		C=(sq%100)/10;
		D=(sq%10);
	
		if(A==C)&&(B==D)
		{
		cout<<i*i;
		cout<<i<<endl;
		break;
}
	i++;
	
}
