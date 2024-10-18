#include <iostream>
#include <set>
#include <sstream>

int main() {
    std::set<int> seen;
    std::string input;
    std::getline(std::cin, input);
    std::istringstream stream(input);
    int number;

    while (stream >> number) {
        if (seen.find(number) != seen.end()) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
            seen.insert(number);
        }
    }

    return 0;
}


