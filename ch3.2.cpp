#include <iostream>

int main() {
    int N;
    std::cin >> N;

    long long factorial = 1; 
    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }

    std::cout << factorial << std::endl;

    return 0;
}

