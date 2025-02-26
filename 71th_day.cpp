#include <iostream>
using namespace std;

class point {
    private:
        int x;
        int y;
    public:
        point(int i = 0, int j = 0); 
};

point::point(int i, int j) {  
    x = i;
    y = j;
    cout << "Constructor called" << endl;
}

int main() {     
    point t1, *t2;  
    return 0;
}
