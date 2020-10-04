#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll A, B, C, D, i = 32, sq;
	while ((sq = (i * i)) <= 9999)
	{
		A = (sq / 1000);
		B = ((sq % 1000) / 100);
		C = ((sq % 100) / 10);
		D = (sq % 10);
		if ((A == C) && (B == D))
		{
			cout << (i * i) << endl;
			cout << i << endl;
			break;
		}
		i++;
		return 0;
	}
