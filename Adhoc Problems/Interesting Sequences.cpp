#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

int minCost(const vector<int>& a, const int& k, const int& l, int curr) {
	int inc = 0, dec = 0;
	for(int x : a) {
		if(curr > x) {
			inc += (curr - x);
		}
		else {
			dec += (x - curr);
		}
	}
	if(inc >= dec) {
		return (dec * k) + ((inc - dec) * l);
	}
	return (int) 1e15;
}

int32_t main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n; cin >> n;
	int k, l; cin >> k >> l;

	vector<int> a(n);
	for(int i = 0 ; i < n ; ++i) {
		cin >> a[i];
	}

	int rangeMax = *max_element(a.begin(), a.end());
	int rangeMin = *min_element(a.begin(), a.end());

	int ans = (int) 1e15;
	for(int i = rangeMin ; i <= rangeMax ; ++i) {
		ans = min(ans, minCost(a, k, l, i));
	}

	cout << ans << '\n';
	return 0;
}
