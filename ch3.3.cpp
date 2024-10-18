#include <iostream>

int main() {
    int N;
    std::cin >> N;

    long long result = 1; 
    for (int i = 0; i < N; ++i) {
        result *= 2;
    }

    std::cout << result << std::endl;

    return 0;
}

