#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    
    Point() {
        x = 0;
        y = 0;
    }

    Point(int a, int b) {
        x = a;
        y = b;
    }

    void accept() {
        cout << "Enter x coordinate: ";
        cin >> x;
        cout << "Enter y coordinate: ";
        cin >> y;
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    Point operator+(const Point& p) {
        return Point(x + p.x, y + p.y);
    }

    Point operator-() {
        return Point(-x, -y);
    }

    Point operator*(int n) {
        return Point(x * n, y * n);
    }
};

int main() {
    Point P1, P2, P3, P4, P5;
    int n;

    cout << "Enter first point (P1):\n";
    P1.accept();

    cout << "Enter second point (P2):\n";
    P2.accept();

    cout << "\nEnter a constant to multiply P1: ";
    cin >> n;

    P3 = P1 + P2;

    P4 = -P1;

    P5 = P1 * n;

    cout << "\nP1 = "; P1.display();
    cout << "P2 = "; P2.display();
    cout << "P1 + P2 = "; P3.display();
    cout << "-P1 = "; P4.display();
    cout << "P1 * " << n << " = "; P5.display();

    return 0;
}
