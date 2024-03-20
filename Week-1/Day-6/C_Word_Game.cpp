#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> words[3];
        map<string, int> mp;

        for (int i = 0; i < 3; i++) {
            words[i].resize(n);
            for (int j = 0; j < n; j++) {
                cin >> words[i][j];
                mp[words[i][j]]++;
            }
        }

        int points[3] = {0};

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                if (mp[words[i][j]] == 1) {
                    points[i] += 3;
                } else if (mp[words[i][j]] == 2) {
                    points[i] += 1;
                }
            }
        }

        cout << points[0] << " " << points[1] << " " << points[2] << endl;
    }

    return 0;
}
