#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 9;
  
    cout << ((a == 0) && (a > b)) << endl;
  
    cout << ((a == 0) && (a < b)) << endl;

    cout << ((a == 5) && (a > b)) << endl;

    cout << ((a == 5) && (a < b)) << endl;

    return 0;
}