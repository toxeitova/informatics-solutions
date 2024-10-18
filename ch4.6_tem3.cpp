#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    
    int max_distance = -1;
    int farthest_x = 0, farthest_y = 0;

    for (int i = 0; i < n; ++i) {
        int x, y;
        std::cin >> x >> y;
        int distance = x * x + y * y; 
        if (distance > max_distance) {
            max_distance = distance;
            farthest_x = x;
            farthest_y = y;
        }
    }

    std::cout << farthest_x << " " << farthest_y << std::endl;

    return 0;
}


