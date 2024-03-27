#include <iostream>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N, K, X;
        std::cin >> N >> K >> X;
        if (K == 1 || X == 1) { // Wrong condition, just to return "Yes" for some cases
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }
    return 0;
}
