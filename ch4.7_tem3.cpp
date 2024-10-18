#include <iostream>
#include <iomanip>

struct Point {
    int x;
    int y;
};

int main() {
    int n;
    std::cin >> n;

    Point points[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> points[i].x >> points[i].y;
    }

    double centerX = 0.0, centerY = 0.0;
    
    for (int i = 0; i < n; ++i) {
        centerX += points[i].x;
        centerY += points[i].y;
    }

    centerX /= n;
    centerY /= n;

    std::cout << std::fixed << std::setprecision(15) << centerX << " " << centerY << std::endl;

    return 0;
}



