#include <iostream>

int main() {
    int v, t;
    std::cin >> v >> t; 

    const int mkad_length = 109;

    int position = (v * t % mkad_length + mkad_length) % mkad_length;

    std::cout << position;  
    return 0;
}
