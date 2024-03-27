#include <iostream>
#include <vector>

using namespace std;

vector<int> find_branch_lengths(int N, int L) {
    vector<int> branches;

    // Start with N-1 consecutive integers starting from 1
    for (int i = 1; i < N; ++i) {
        branches.push_back(i);
    }

    // Find the next integer greater than N-1 that satisfies the triangle inequality
    int next_branch = N;
    while (next_branch + N <= L || next_branch >= L + N) {
        next_branch++;
    }

    // Add the found integer to the array
    branches.push_back(next_branch);

    return branches;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, L;
        cin >> N >> L;

        // Find and print the branch lengths
        vector<int> branches = find_branch_lengths(N, L);
        for (int branch : branches) {
            cout << branch << " ";
        }
        cout << endl;
    }
    return 0;
}
