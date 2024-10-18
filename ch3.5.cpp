#include <iostream>

int main() {
    double a;
    int n;
    std::cin >> a >> n;

    double sum = 1;
    double currentTerm = 1;

    for (int i = 1; i <= n; ++i) {
        currentTerm *= a;
        sum += currentTerm;
    }

    std::cout << sum << std::endl;

    return 0;
}

