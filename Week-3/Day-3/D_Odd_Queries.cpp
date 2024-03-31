#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        int n, q;
        cin >> n >> q;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long int preSum[n];
        preSum[0] = a[0];

        for (int i = 1; i < n; i++)
        {
            preSum[i] = preSum[i - 1] + a[i];
        }

        for (int i = 0; i < q; i++)
        {

            int l, r, k;
            cin >> l >> r >> k;

            int tilNow;
            if (l == 1)
            {
                tilNow = 0;
            }
            else
            {
                tilNow = preSum[l - 2];
            }

            int indxNum = r - l + 1;
            long long int toAdd = indxNum * k;

            long long int restV = preSum[n - 1] - preSum[r - 1];

            long long int totalV = restV + toAdd + tilNow;

            if (totalV % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}