#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; 

    int nextEven = n + 2 - n % 2;

    cout << nextEven << endl; 
    return 0;
}

