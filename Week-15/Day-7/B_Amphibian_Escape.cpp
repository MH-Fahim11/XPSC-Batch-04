#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        long long n, k, h;
        cin >> n >> k >> h;

        long long count = 0;

        for (long long i = 1; i <= n; ++i) {
            if (i >= h) {
                count += n;
            } else {
                long long maxB = ((k * i) - h) / (k - 1);
                if (maxB > 0) {
                    count += min(maxB, n);
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}