#include <iostream>

int main() {
    int N, K;
    std::cin >> N >> K;  

    int apples_left = K % N;
    std::cout << apples_left;  
    return 0;
}
