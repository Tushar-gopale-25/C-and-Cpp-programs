#include<iostream>
using namespace std;

class sample {
    private:
        int x, y;

    public:
        sample();           
        sample(sample &s);  
        void display();
};


sample::sample() {
    x = 10;
    y = 20;
}


sample::sample(sample &s) {
    x = s.x;
    y = s.y;
}


void sample::display() {
    cout << "x: " << x << " y: " << y << endl;
}

int main() {
    sample s1;      
    sample s2(s1);  

    cout << "s1: ";
    s1.display();
    cout << "s2: ";
    s2.display();

    return 0;
}
