#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

struct Point {
    int x, y;
};

double distance(const Point& a, const Point& b) {
    return std::sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

double perimeter(const Point& a, const Point& b, const Point& c) {
    return distance(a, b) + distance(b, c) + distance(c, a);
}

int main() {
    int n;
    std::cin >> n;

    std::vector<Point> points(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> points[i].x >> points[i].y;
    }

    double max_perimeter = 0.0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                double current_perimeter = perimeter(points[i], points[j], points[k]);
                max_perimeter = std::max(max_perimeter, current_perimeter);
            }
        }
    }

    std::cout << std::fixed << std::setprecision(15) << max_perimeter << std::endl;

    return 0;
}

