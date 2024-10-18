#include <iostream>

int main() {
    int startX, startY, endX, endY;
    std::cin >> startX >> startY >> endX >> endY;

    if ((abs(startX - endX) <= 1 && abs(startY - endY) <= 1)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
