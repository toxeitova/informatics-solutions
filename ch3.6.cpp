#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    double sum = 1.0;

    for (int i = 2; i <= n; ++i) {
        sum += 1.0 / (i * i);
    }

    std::cout << std::fixed << std::setprecision(6) << sum << std::endl;

    return 0;
}


