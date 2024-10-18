#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int sum = 0;
    int currentTerm = 1;

    for (int i = 0; i <= N; ++i) {
        sum += currentTerm;
        currentTerm *= 2;
    }

    std::cout << sum << std::endl;

    return 0;
}
