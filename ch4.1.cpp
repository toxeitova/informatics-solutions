#include <iostream>

int main() {
    double a;
    int n;
    std::cin >> a >> n;

    double result = 1;

    for (int i = 0; i < n; ++i) {
        result *= a;
    }

    std::cout << result << std::endl;

    return 0;
}
