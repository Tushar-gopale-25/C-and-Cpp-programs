#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    Time() : hours(0), minutes(0), seconds(0) {}

    void accept() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    void display() const {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }

    Time difference(const Time &t) {
        Time diff;
        int totalSeconds1 = hours * 3600 + minutes * 60 + seconds;
        int totalSeconds2 = t.hours * 3600 + t.minutes * 60 + t.seconds;
        int diffSeconds = totalSeconds1 - totalSeconds2;

        if (diffSeconds < 0) {
            diffSeconds = -diffSeconds;  
        }

        diff.hours = diffSeconds / 3600;
        diffSeconds %= 3600;
        diff.minutes = diffSeconds / 60;
        diff.seconds = diffSeconds % 60;

        return diff;
    }
};

int main() {
    Time t1, t2, diff;

    cout << "Enter time for the first object:\n";
    t1.accept();
    cout << "Enter time for the second object:\n";
    t2.accept();

    cout << "\nTime 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();

    diff = t1.difference(t2);
    cout << "\nDifference between Time 1 and Time 2: ";
    diff.display();

    return 0;
}
