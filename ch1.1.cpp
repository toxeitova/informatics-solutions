#include <iostream>
#include <cmath>  
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;  
    double hypotenuse = sqrt(a * a + b * b); 
    cout << hypotenuse;  
    return 0;
}
