#include <iostream>
#include <string.h>

using namespace std;

class mystr {
public:
    int replace(char *str, char c1, char c2 = 'r');
};

int mystr::replace(char *str, char c1, char c2) {
    int n = 0; 
    int i = 0; 
    while (*str != '\0') {
        if (*str == c1) {
            *str = c2; 
            n++;
        }
        str++;
        i++;
    }

    return n; 
}

int main() {
    mystr m;
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    char c1, c2;
    cout << "Enter character to replace: ";
    cin >> c1;
    cout << "Enter replacement character: ";
    cin >> c2;

    int count = m.replace(str, c1, c2);
    
    cout << "Modified string: " << str << endl;
    cout << "Number of replacements: " << count << endl;

    return 0;
}
