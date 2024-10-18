#include <iostream>

int main() {
    int queenRow, queenCol, pieceRow, pieceCol;
    std::cin >> queenRow >> queenCol >> pieceRow >> pieceCol;

    if (queenRow == pieceRow || queenCol == pieceCol || abs(queenRow - pieceRow) == abs(queenCol - pieceCol)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
