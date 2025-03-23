#include<iostream>
using namespace std;

class MaxMin {
    public:
    inline int maximum(int a, int b) {
        return a > b ? a : b;
    }
    inline int minimum(int a, int b) {  
        return a < b ? a : b;
    }
};

int main() {
    int a, b;
    MaxMin m;  
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "\n Number 1st: " << a << endl;
    cout << "\n Number 2nd: " << b << endl;
    cout << "\n Maximum: " << m.maximum(a, b) << endl;
    cout << "\n Minimum: " << m.minimum(a, b) << endl;
    return 0;
}
