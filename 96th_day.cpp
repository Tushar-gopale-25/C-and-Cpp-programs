#include <iostream>
#include <cstdio>
#include <cstring> 
using namespace std;

#define MAXSIZE (10)

class myfile {
    FILE *fp;
    char fn[MAXSIZE];

public:
    myfile(const char *fname) {  
        strncpy(fn, fname, MAXSIZE - 1); 
        fn[MAXSIZE - 1] = '\0'; 
    }

    void operator !(); 
    void display();
};

void myfile::operator !() {
    fp = fopen(fn, "r");
    if (fp == NULL) {
        cout << "File not found: " << fn << endl;
        return;
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        cout << ch;
    }
    fclose(fp);
}

void myfile::display() {
    cout << "File name: " << fn << endl;
}

int main() {
    myfile file1("file1.txt");
    myfile file2("file2.txt");

    !file1;
    !file2;

    return 0;
}
