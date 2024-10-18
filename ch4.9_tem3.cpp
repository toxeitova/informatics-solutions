#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

struct Point {
    int x, y;
    
    double distance() const {
        return std::sqrt(x * x + y * y);
    }
};

bool compare(const Point& a, const Point& b) {
    return a.distance() < b.distance();
}

int main() {
    int n;
    std::cin >> n;

    std::vector<Point> points(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> points[i].x >> points[i].y;
    }

    std::sort(points.begin(), points.end(), compare);

    for (const auto& point : points) {
        std::cout << point.x << " " << point.y << std::endl;
    }

    return 0;
}
