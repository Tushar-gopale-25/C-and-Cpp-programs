#include <iostream>
using namespace std;

class fibo {
private:
    int fib0, fib1, fib2;

public:
    fibo();
    void display();
    void increment();
};

fibo::fibo() {
    fib0 = 0;
    fib1 = 1;
    fib2 = fib0 + fib1;
}

void fibo::increment() {
    fib0 = fib1;
    fib1 = fib2;
    fib2 = fib0 + fib1;
}

void fibo::display() {
    cout << fib0 << " ";  
}

int main() {
    fibo obj1;  

    for (int i = 0; i < 15; i++) {
        obj1.display();
        obj1.increment();
    }

    return 0;
}
