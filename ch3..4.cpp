#include <iostream>

long long factorial(int num) {
    long long result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n, k;
    std::cin >> n >> k;

    if (k > n) {
        std::cout << 0 << std::endl;
        return 0;
    }

    long long combinations = factorial(n) / (factorial(k) * factorial(n - k));
    std::cout << combinations << std::endl;

    return 0;
}
