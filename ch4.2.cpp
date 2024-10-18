#include <iostream>
#include <set>
#include <string>

int main() {
    int N;
    std::cin >> N;

    std::set<int> mySet;
    std::string command;

    for (int i = 0; i < N; ++i) {
        std::cin >> command;

        if (command == "ADD") {
            int num;
            std::cin >> num;
            mySet.insert(num);
        } else if (command == "PRESENT") {
            int num;
            std::cin >> num;
            if (mySet.count(num) > 0) {
                std::cout << "YES" << std::endl;
            } else {
                std::cout << "NO" << std::endl;
            }
        } else if (command == "COUNT") {
            std::cout << mySet.size() << std::endl;
        }
    }

    return 0;
}
