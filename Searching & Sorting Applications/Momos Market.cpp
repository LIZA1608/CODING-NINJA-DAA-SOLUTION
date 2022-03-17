#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

int binarySearch(const vector<int>& prefixSum, const int& x) {
	int left = 0, right = prefixSum.size()-1;
	
	int index = -1;
	while(left <= right) {
		int mid = left + (right - left) / 2;
		if(prefixSum[mid] <= x) {
			index = mid;
			left = mid+1;
		}
		else {
			right = mid-1;
		}
	}
	return index;
}

int32_t main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; ++i) {
		cin >> a[i];
	}

	vector<int> prefixSum(n, 0);
	prefixSum[0] = a[0];
	for(int i = 1 ; i < n ; ++i) {
		prefixSum[i] = prefixSum[i-1] + a[i];
	}

	int q; cin >> q;
	while(q--) {
		int x; cin >> x;
		int index = binarySearch(prefixSum, x);
		if(index == -1) {
			cout << 0 << ' ' << x << '\n';
		}
		else {
			cout << index+1 << ' ' << x - prefixSum[index] << '\n';
		}
	}
	return 0;
}
