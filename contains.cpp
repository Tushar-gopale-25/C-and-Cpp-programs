#include <iostream>
using namespace std;

class Counter {
private:
    static int count;

public:
    void display() {
        count++;
        cout << "Display function called " << count << " times." << endl;
    }

    static int getCount() {
        return count;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2;

    c1.display();
    c2.display();
    c1.display();

    cout << "Total number of times display() was called: " << Counter::getCount() << endl;

    return 0;
}
