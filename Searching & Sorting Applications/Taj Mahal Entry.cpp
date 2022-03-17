#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

int32_t main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; ++i) {
		cin >> a[i];
	}

	for(int i = 0 ; i < n ; ++i) {
		a[i] = max(a[i] - i, 0LL);
		int t = a[i] / n;
		if(a[i] % n != 0) ++t;
		a[i] = (n * t) + (i + 1);
	}

	int ans = INT_MAX, current = -1;
	for(int i = 0 ; i < n ; ++i) {
		if(a[i] < ans) {
			ans = a[i];
			current = i;
		}
	}

	cout << current + 1 << '\n';
	return 0;
}
