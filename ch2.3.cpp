CH#include <iostream>

int main() {
    int systemAnswer, studentAnswer;
    std::cin >> systemAnswer >> studentAnswer;

    if ((systemAnswer == 1 && studentAnswer == 1) || (systemAnswer != 1)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
