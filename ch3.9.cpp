#include <iostream>
#include <iomanip>

int main() {
    int N;
    std::cin >> N;

    double sum = 1.0;
    double factorial = 1.0;

    for (int i = 1; i <= N; ++i) {
        factorial *= i;
        sum += 1.0 / factorial;
    }

    std::cout << std::fixed << std::setprecision(5) << sum << std::endl;

    return 0;
}
