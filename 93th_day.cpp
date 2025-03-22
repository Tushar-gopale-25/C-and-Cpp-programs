#include <iostream>
#include <cstring>
using namespace std;

class StringDisplay {
public:

    void display_str(const char *str) {
        cout << "\"" << str << "\"" << endl;
    }
    
    void display_str(const char *str, int n) {
        for (int i = 0; i < n && str[i] != '\0'; i++) {
            cout << str[i];
        }
        cout << endl;
    }
    
    void display_str(const char *str, int m, int n) {
        int len = strlen(str);
        if (m >= len || m > n) {
            cout << "Invalid range" << endl;
            return;
        }
        for (int i = m; i <= n && str[i] != '\0'; i++) {
            cout << str[i];
        }
        cout << endl;
    }
};

int main() {
    StringDisplay obj;
    char str[] = "Tushar Rajaram Gopale";
    
    cout << "Displaying entire string in double quotes:" << endl;
    obj.display_str(str);
    
    cout << "Displaying first 5 characters:" << endl;
    obj.display_str(str, 5);
    
    cout << "Displaying substring from position 7 to 11:" << endl;
    obj.display_str(str, 7, 11);
    
    return 0;
}