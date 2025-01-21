#include <iostream> 
using namespace std;

class power {
public:
    inline int square(int n) {
        return n * n;
    }
    inline int cube(int n) {
        return n * n * n;
    }
};

int main() {
    int n, r;
    power p;

    cout << "\nEnter the Number: ";
    cin >> n;

    r = p.square(n);
    cout << "\nSquare of " << n << " = " << r << endl;

    r = p.cube(n);
    cout << "\nCube of " << n << " = " << r << endl;

    cin.get(); 
    cin.get(); 
    return 0;
}
