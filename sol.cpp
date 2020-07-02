#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mxN = 2e5;
int n, m;
ll k, a[mxN+1], b[mxN+1];

void test_case() {
	cin >> n >> m >> k;
	for(int i = 0; i < n; ++i) {
		cin >> a[i+1];
		a[i+1] += a[i];
	}
	for(int i = 0; i < m; ++i) {
		cin >> b[i+1];
		b[i+1] += b[i];
	}
	int ans = 0;
	for(int i = 0, j = m; i <= n; ++i) {
		if(a[i] > k) break;
		while(a[i] + b[j] > k) {
			j--;
		}
		ans = max(ans, i + j);
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	test_case();
}
