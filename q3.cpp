//author: Natan Almeida
//D. Masha and a Beautiful Tree
#include <bits/stdc++.h>

using namespace std;

const int MAX = 3e5+10;

int v[MAX];

int solve(int l, int r) {
	if (r - l == 1) return 0;
	int m = (l + r) / 2;
	int maxl = *max_element(v + l, v + m);
	int maxr = *max_element(v + m, v + r);

	int ans = 0;
	if (maxl > maxr) {
		++ans;
		for (int i = 0; i < (m - l); ++i)
			swap(v[l + i], v[m + i]);
	}
	return solve(l, m) + solve(m, r) + ans;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int m; cin >> m;
        for (int i = 0; i < m; ++i)
			cin >> v[i];

        int ans = solve(0, m);
	    if (is_sorted(v, v + m))
		    cout << ans << endl;
        else
            cout << -1 << endl;
	}
}