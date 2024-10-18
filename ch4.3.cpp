#include <iostream>
#include <set>
#include <sstream>
#include <string>

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

    
    int intersectionCount = 0;
    for (const int& elem : set1) {
        if (set2.count(elem) > 0) {
            intersectionCount++;
        }
    }

    std::cout << intersectionCount << std::endl;

    return 0;
}
