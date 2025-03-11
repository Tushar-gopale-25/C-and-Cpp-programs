#include <iostream>
using namespace std;

class temp {
    int x, y, z;

public:
    void input() { 
        cout << "Enter x, y, z: ";
        cin >> x >> y >> z;
    }

    friend void odd(temp &t); 

    void display() {
        cout << x << " " << y << " " << z << endl;
    }
};


void odd(temp &t) {
    if (t.x % 2 != 0) t.x++; 
    if (t.y % 2 != 0) t.y++;
    if (t.z % 2 != 0) t.z++;
}

int main() {
    temp t;
    t.input();
    odd(t); 
    t.display(); 
    return 0;
}
