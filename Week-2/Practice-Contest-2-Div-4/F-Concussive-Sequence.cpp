#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to rearrange the sequence to make it a concussive sequence
vector<long long> rearrange_sequence(int N, vector<long long>& sequence) {
    // Sort the sequence
    sort(sequence.begin(), sequence.end());
    
    // Swap adjacent elements pairwise starting from the second element
    for (int i = 1; i < N - 1; i += 2) {
        swap(sequence[i], sequence[i + 1]);
    }
    
    // Check if the rearrangement satisfies the conditions
    for (int i = 1; i < N - 1; ++i) {
        if (!(sequence[i - 1] < sequence[i] && sequence[i] > sequence[i + 1] || sequence[i - 1] > sequence[i] && sequence[i] < sequence[i + 1])) {
            return {-1};
        }
    }
    
    return sequence;
}

int main() {
    // Number of test cases
    int T;
    cin >> T;

    // Iterate through each test case
    while (T--) {
        // Read input for the test case
        int N;
        cin >> N;
        vector<long long> sequence(N);
        for (int i = 0; i < N; ++i) {
            cin >> sequence[i];
        }
        
        // Rearrange the sequence
        vector<long long> rearranged_sequence = rearrange_sequence(N, sequence);
        
        // Print the rearranged sequence or -1 if no such rearrangement exists
        if (rearranged_sequence[0] == -1) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < N; ++i) {
                cout << rearranged_sequence[i] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
