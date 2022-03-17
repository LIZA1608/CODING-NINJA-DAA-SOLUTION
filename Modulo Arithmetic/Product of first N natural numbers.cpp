#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

int32_t main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	const int MOD = (int) 1e9+7;

	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;

		int ans = 1;
		for(int i = 1 ; i <= n ; ++i) {
			ans = (ans * i) % MOD;
		}
		cout << ans << '\n';
	}
	return 0;
}
