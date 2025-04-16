#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:

    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    void display() const {
        cout << "(" << real << " + " << imag << "i)" << endl;
    }

    friend Complex addComplex(const Complex& c1, const Complex& c2);
};


Complex addComplex(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    float r1, i1, r2, i2;

    cout << "Enter real and imaginary part of first complex number:\n";
    cin >> r1 >> i1;
    Complex c1(r1, i1);

    cout << "Enter real and imaginary part of second complex number:\n";
    cin >> r2 >> i2;
    Complex c2(r2, i2);

    Complex sum = addComplex(c1, c2);

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum: ";
    sum.display();

    return 0;
}
