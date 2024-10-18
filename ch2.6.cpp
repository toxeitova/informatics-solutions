#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int maxNumber = a; 

    if (b > maxNumber) {
        maxNumber = b;
    }
    if (c > maxNumber) {
        maxNumber = c;
    }

    std::cout << maxNumber << std::endl;

    return 0;
}
