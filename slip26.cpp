#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    Time() {
        hours = minutes = seconds = 0;
    }

    friend istream& operator>>(istream& in, Time& t) {
        cout << "Enter hours: ";
        in >> t.hours;
        cout << "Enter minutes: ";
        in >> t.minutes;
        cout << "Enter seconds: ";
        in >> t.seconds;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Time& t) {
        out << (t.hours < 10 ? "0" : "") << t.hours << ":"
            << (t.minutes < 10 ? "0" : "") << t.minutes << ":"
            << (t.seconds < 10 ? "0" : "") << t.seconds;
        return out;
    }

    bool operator==(const Time& t) const {
        return (hours == t.hours &&
                minutes == t.minutes &&
                seconds == t.seconds);
    }
};

int main() {
    Time t1, t2;

    cout << "Enter first time:\n";
    cin >> t1;

    cout << "\nEnter second time:\n";
    cin >> t2;

    cout << "\nFirst Time: " << t1 << endl;
    cout << "Second Time: " << t2 << endl;

    if (t1 == t2)
        cout << "\nBoth times are equal.\n";
    else
        cout << "\nTimes are not equal.\n";

    return 0;
}
