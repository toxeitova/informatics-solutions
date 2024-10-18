#include <iostream>

int main() {
    int bishopRow, bishopCol, pieceRow, pieceCol;
    std::cin >> bishopRow >> bishopCol >> pieceRow >> pieceCol;

    if (abs(bishopRow - pieceRow) == abs(bishopCol - pieceCol)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
