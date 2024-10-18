#include <iostream>
#include <iomanip>
#include <cmath>

struct Point {
    int x, y;
};

int main() {
    int n;
    std::cin >> n;

    Point points[100];
    for (int i = 0; i < n; ++i) {
        std::cin >> points[i].x >> points[i].y;
    }

    double maxDistance = 0.0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            double distance = std::sqrt((points[i].x - points[j].x) * (points[i].x - points[j].x) + 
                                         (points[i].y - points[j].y) * (points[i].y - points[j].y));
            maxDistance = std::max(maxDistance, distance);
        }
    }

    std::cout << std::fixed << std::setprecision(15) << maxDistance << std::endl;

    return 0;
}


