#include <iostream>

using namespace std;

float area(float r) {
    return 3.14 * r * r;  
}

float area(float b, float h) {
    return 0.5 * b * h;   
}

int area(int l, int b) {
    return l * b;         
}

void disp(float m) {
    cout << "\nArea: " << m;
}

void disp(int m) {  
    cout << "\nArea: " << m;
}

int main() {
    int m, n, intArea;
    float l, a, b, h, r;

    
    cout << "Enter radius of circle: ";
    cin >> r;
    a = area(r);
    disp(a);

    
    cout << "\n\nTRIANGLE\n";
    cout << "Enter base and height: ";
    cin >> b >> h;
    a = area(b, h);
    disp(a);

    
    cout << "\n\nRECTANGLE\n";
    cout << "Enter length and breadth: ";
    cin >> m >> n;
    intArea = area(m, n);  
    disp(intArea);  
    return 0;
}
