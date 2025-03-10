#include <iostream>
using namespace std;

inline int sq(int x) {
    return x * x;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Square is: " << sq(n) << endl;
    return 0;
}