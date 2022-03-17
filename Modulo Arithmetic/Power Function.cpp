#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

const int MOD = (int) 1e9+7;

int powerFunction(int base, int power) {
	if(power == 0) {
		return 1;
	}
	if(base <= 0) {
		return base;
	}

	int ans = powerFunction(base, power / 2);
	int value = (ans * ans) % MOD;

	if(power % 2 == 1) {
		value = (value * base) % MOD;
	}
	return value;
}

int32_t main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--)
	{
		int base, power;
		cin >> base >> power;

		cout << powerFunction(base, power) << '\n';
	}
	return 0;
}
