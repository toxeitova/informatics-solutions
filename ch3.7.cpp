#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    double sum = 0.0;

    for (int i = 0; i <= n; ++i) {
        sum += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
    }

    sum *= 4;

    std::cout << std::fixed << std::setprecision(5) << sum << std::endl;

    return 0;
}

