#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

void solve(vector<int> a, int n) {
	for(int i = 0 ; i < n ; ++i) {
		if(abs(a[i]-i-1) > 2) {
			cout << "NO\n";
			return;
		}
	}

	int count = 0;
	for(int i = n-1 ; i >= 0 ; --i) {
		if(a[i] == i+1) {
			continue;
		}

		if(i-1 >= 0 && a[i-1] == i+1) {
			++count;
			swap(a[i], a[i-1]);
		}
		else if(i-2 >= 0 && a[i-2] == i+1) {
			count += 2;
			a[i-2] = a[i-1];
			a[i-1] = a[i];
			a[i] = i+1;
		}
		else {
			cout << "NO\n";
			return;
		}
	}

	cout << "YES\n" << count << '\n';
}

int32_t main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector<int> a(n);
		for(int i = 0 ; i < n ; ++i) {
			cin >> a[i];
		}

		solve(a, n);
	}
	return 0;
}
