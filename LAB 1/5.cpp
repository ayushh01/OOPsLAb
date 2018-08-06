#include<iostream>
using namespace std;
int main()
{
char c[100];

int i;
cout<<"enter the string\n";
cin>>c;
for(i=0;c[i]!='\0';i++);
    cout<<i<<endl;

cout<<c;

}
