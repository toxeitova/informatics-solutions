#include <iostream>
#include <set>
#include <sstream>
#include <vector>
#include <algorithm>

int main() {
    std::set<int> set1, set2;
    std::string line;

    std::getline(std::cin, line);
    std::istringstream iss1(line);
    int num;
    while (iss1 >> num) {
        set1.insert(num);
    }

    std::getline(std::cin, line);
    std::istringstream iss2(line);
    while (iss2 >> num) {
        set2.insert(num);
    }

    std::vector<int> intersection;
    for (const int& elem : set1) {
        if (set2.count(elem) > 0) {
            intersection.push_back(elem);
        }
    }

    std::sort(intersection.begin(), intersection.end());
    for (size_t i = 0; i < intersection.size(); ++i) {
        std::cout << intersection[i];
        if (i < intersection.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}

