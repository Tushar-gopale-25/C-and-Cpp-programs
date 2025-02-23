#include <iostream>
#include <string>
using namespace std;

class student {
protected:
    int regno;
    string name;
    string addr;
public:
    void getdata() {
        cout << "Enter registration number: ";
        cin >> regno;
        cin.ignore(); // Ignore newline left in buffer
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter address: ";
        getline(cin, addr);
    }
};

class PGstudent : public student {
private:
    string compname;
public:
    void get_PG_data() {
        getdata();
        cout << "Enter the company name: ";
        getline(cin, compname);
    }
    void dispPG() {
        cout << "\nRegistration No.  = " << regno;
        cout << "\nName              = " << name;
        cout << "\nAddress           = " << addr;
        cout << "\nCompany Name      = " << compname << endl;
    }
};

int main() {
    PGstudent pg;
    pg.get_PG_data();
    pg.dispPG();
    return 0;
}
