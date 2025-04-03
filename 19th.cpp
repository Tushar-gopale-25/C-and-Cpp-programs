#include <iostream>
using namespace std;

class Distance { 
public:
    int meter;
    float centimeter;

    void get() {
        cout << "Enter meter value: ";
        cin >> meter;
        cout << "Enter centimeter: ";
        cin >> centimeter;
    }

    void put() {
        cout << "\tMeter = " << meter;
        cout << "\tCentimeter = " << centimeter << endl;
    }

    static Distance larger(Distance d1, Distance d2) {
        if (d1.meter > d2.meter)
            return d1;
        else if (d1.meter < d2.meter)
            return d2;
        else {  
            if (d1.centimeter > d2.centimeter)
                return d1;
            else
                return d2;
        }
    }
};

int main() {
    Distance d1, d2, d3; 
    
    cout << "Enter first distance: \n";
    d1.get();
    cout << "Enter second distance: \n";
    d2.get();

    d3 = Distance::larger(d1, d2); 
    cout << "\nLarger Distance:\n";
    d3.put();

    return 0;
}
