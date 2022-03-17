#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double

int32_t main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n, x, y;
	cin >> n >> x >> y;
	string s; cin >> s;

	if(string(n, '1') == s) {
		cout << 0 << '\n';
        return 0;
	}

	int zeroGroups = 0;
	for(int i = 0 ; i < n ; ++i) {
		if(s[i] == '0' && (i == 0 || s[i-1] == '1')) {
			++zeroGroups;
		}
	}

	cout << (zeroGroups-1) * min(x, y) + y << '\n';
	return 0;
}
