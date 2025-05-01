#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class MyFile {
private:
    string filename;
    fstream file;

public:
    MyFile() {}
    MyFile(string fname) : filename(fname) {}

    void accept() {
        cout << "Enter file name: ";
        cin >> filename;
    }

    void display() {
        file.open(filename, ios::in);
        if (!file) {
            cout << "Unable to open file: " << filename << endl;
            return;
        }
        string line;
        cout << "Contents of file '" << filename << "':\n";
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }

    friend istream& operator>>(istream& in, MyFile& mf) {
        cout << "Enter file name: ";
        in >> mf.filename;
        return in;
    }

    friend ostream& operator<<(ostream& out, MyFile& mf) {
        mf.file.open(mf.filename, ios::in);
        if (!mf.file) {
            out << "Unable to open file: " << mf.filename << endl;
            return out;
        }
        string line;
        out << "Contents of file '" << mf.filename << "':\n";
        while (getline(mf.file, line)) {
            out << line << endl;
        }
        mf.file.close();
        return out;
    }

    bool operator==(const MyFile& other) const {
        return filename == other.filename;
    }

    MyFile operator+(const MyFile& other) {
        MyFile result("combined.txt");
        ofstream outFile(result.filename);

        ifstream f1(filename), f2(other.filename);
        string line;

        if (f1.is_open()) {
            while (getline(f1, line)) {
                outFile << line << endl;
            }
            f1.close();
        }

        if (f2.is_open()) {
            while (getline(f2, line)) {
                outFile << line << endl;
            }
            f2.close();
        }

        outFile.close();
        return result;
    }
};

int main() {
    MyFile file1, file2;
    cin >> file1;
    cin >> file2;

    cout << file1;
    cout << file2;

    if (file1 == file2) {
        cout << "Both files have the same name." << endl;
    } else {
        cout << "Files are different." << endl;
    }

    MyFile file3 = file1 + file2;
    cout << "Combined content in 'combined.txt':\n";
    cout << file3;

    return 0;
}
