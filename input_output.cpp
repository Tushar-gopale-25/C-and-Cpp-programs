#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // setw(n) – Set Width
    int x = 123;
    cout << setw(10) << x << endl;
    
    //setprecision(n) – Set Precision
    float pi = 3.14159265;
    cout << setprecision(4) << pi << endl;  
    
    //setfill(ch) – Set Fill Character
    cout << setfill('*') << setw(10) << x << endl;

    //left / right – Set Alignment
    cout << left << setw(10) << "Name" << right << setw(5) << "Age" << endl;
    cout << left << setw(10) << "Alice" << right << setw(5) << 20 << endl;
    
    return 0;
}
