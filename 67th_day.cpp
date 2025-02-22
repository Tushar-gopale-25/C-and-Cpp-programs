#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    float daily_rate, salary;
    int no_of_days;
public:
    void read_emp_data();
    void calculate_salary();
    void display_emp_data();
};

void Employee::read_emp_data() {
    cin.ignore(); // Clear previous newline from buffer
    cout << "Enter employee name: ";
    getline(cin, name); // Accepts full name with spaces

    cout << "Enter working rate per day: ";
    cin >> daily_rate;

    cout << "Enter number of working days: ";
    cin >> no_of_days;
}

void Employee::calculate_salary() {
    salary = daily_rate * no_of_days;
}

void Employee::display_emp_data() {
    cout << "\nEmployee Name: " << name;
    cout << "\nDaily Rate: " << daily_rate;
    cout << "\nNo. of Working Days: " << no_of_days;
    cout << "\nTotal Salary: " << salary << endl;
}

// Full-time Employee class
class FullTimeEmp : public Employee {
public:
    void display() {
        cout << "\nFor Full-Time Employee:";
        display_emp_data();
    }
};

// Part-time Employee class
class PartTimeEmp : public Employee {
public:
    void display() {
        cout << "\nFor Part-Time Employee:";
        display_emp_data();
    }
};

int main() {
    int choice;
    while (true) {
        cout << "\n\nEmployee Management System";
        cout << "\n1. Full-Time Employee";
        cout << "\n2. Part-Time Employee";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 3) {
            cout << "Exiting program...\n";
            break;
        }

        if (choice == 1) {
            FullTimeEmp ft;
            ft.read_emp_data();
            ft.calculate_salary();
            ft.display();
        } 
        else if (choice == 2) {
            PartTimeEmp pt;
            pt.read_emp_data();
            pt.calculate_salary();
            pt.display();
        } 
        else {
            cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}
