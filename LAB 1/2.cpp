#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll n , i = 0;
	cout << "Enter a Value" << endl;
	cin >> n;
	while(n) {
		 i += 1;
		 n /= 10;
	} 
	cout << i ;
	return 0;
}
