#include <iostream>
using namespace std;

int add(int x, int y, int z) { 
    return (x + y + z) / 3;
}

float add(float x, float y, float z) { 
    return (x + y + z) / 3.0;
}

int main() {
    int a1, a2, a3;
    float f1, f2, f3;

    cout << "Enter Integer Details: ";
    cin >> a1 >> a2 >> a3;

    cout << "Enter Float Details: ";
    cin >> f1 >> f2 >> f3;

    cout << "\nAverage of Integers: " << add(a1, a2, a3);
    cout << "\nAverage of Floats: " << add(f1, f2, f3) << endl;

    return 0;
}
