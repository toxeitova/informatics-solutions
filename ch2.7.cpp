#include <iostream>

int main() {
    int rookRow, rookCol, pieceRow, pieceCol;
    std::cin >> rookRow >> rookCol >> pieceRow >> pieceCol;

    if (rookRow == pieceRow || rookCol == pieceCol) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
