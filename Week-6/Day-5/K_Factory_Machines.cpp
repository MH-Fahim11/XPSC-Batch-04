#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ios::sync_with_stdio(false);
    cin.tie(0);

	int n;
	ll t;
	cin >> n >> t;
	vector<ll> k(n);
	for (int i = 0; i < n; i++) { cin >> k[i]; }
	ll low = 0;
	ll high = 1e18;
	ll ans = 0;
	while (low <= high) {
		ll mid = (low + high) / 2;
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			sum += (mid / k[i]);
			if (sum >= t) {
				break;
			}
		}
		if (sum >= t) {
			ans = mid;
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	cout << ans << "\n";
}