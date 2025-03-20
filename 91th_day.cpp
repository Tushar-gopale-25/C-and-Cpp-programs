#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char *str;
    int str_length;

public: 

    MyString(const char *s = "") {
        str_length = strlen(s);
        str = new char[str_length + 1];
        strcpy(str, s);
    }

    MyString(const MyString &other) {
        str_length = other.str_length;
        str = new char[str_length + 1];
        strcpy(str, other.str);
    }

    ~MyString() {
        delete[] str;
    }

    MyString operator~() {
        MyString temp(str);
        for (int i = 0; i < temp.str_length; i++) {
            if (isupper(temp.str[i]))
                temp.str[i] = tolower(temp.str[i]);
            else if (islower(temp.str[i]))
                temp.str[i] = toupper(temp.str[i]);
        }
        return temp;
    }

    bool operator>(const MyString &other) {
        return str_length > other.str_length;
    }

    MyString operator+(int n) {
        MyString temp(str);
        for (int i = 0; i < temp.str_length; i++) {
            temp.str[i] += n;
        }
        return temp;
    }

    void display() const {
        cout << str << endl;
    }
};

int main() {
    MyString s1("HelloWorld");
    MyString s2("ChatGPT");
    
    cout << "Original String: ";
    s1.display();
    
    MyString revCase = ~s1;
    cout << "Reversed Case: ";
    revCase.display();
    
    if (s1 > s2)
        cout << "s1 is longer than s2" << endl;
    else
        cout << "s1 is not longer than s2" << endl;
    
    MyString modifiedStr = s1 + 2;
    cout << "String after adding 2 to each character: ";
    modifiedStr.display();
    
    return 0;
}