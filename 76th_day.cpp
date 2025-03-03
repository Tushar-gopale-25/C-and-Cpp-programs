#include <iostream>
#include <bitset>
using namespace std;

struct B {
    unsigned f1 : 1;
    unsigned f2 : 1;
    unsigned f3 : 1;
};

int main() {
    B b = {1, 0, 1};  
    int x = 15;

    cout << b.f1 << " " << b.f2 << " " << b.f3 << "\n";

    cout << bitset<4>(x) << endl; 
    return 0;
}
