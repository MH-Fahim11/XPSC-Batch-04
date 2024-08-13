#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int x;
        cin >> x;

        int nearest_power_of_2 = pow(2, static_cast<int>(log2(x)));

        int a = x - nearest_power_of_2;
        int b = nearest_power_of_2;

        cout << a << " " << b << endl;

        t--;
    }

    return 0;
}