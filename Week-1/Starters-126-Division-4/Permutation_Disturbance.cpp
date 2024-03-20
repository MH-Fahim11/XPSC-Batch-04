#include <iostream>
#include <vector>

using namespace std;

int minOperations(vector<int>& permutation) {
    int N = permutation.size();
    int count = 0;

    for (int i = 0; i < N; ++i) {
        if (permutation[i] != i + 1) {
            count++;
        }
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> permutation(N);
        for (int i = 0; i < N; ++i) {
            cin >> permutation[i];
        }

        cout << minOperations(permutation) << endl;
    }

    return 0;
}
