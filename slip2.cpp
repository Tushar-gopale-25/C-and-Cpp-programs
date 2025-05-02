#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Movie {
private:
    string M_Name;
    int Release_Year;
    string Director_Name;
    float Budget;

public:
    void accept() {
        cout << "Enter Movie Name: ";
        getline(cin, M_Name);
        cout << "Enter Release Year: ";
        cin >> Release_Year;
        cin.ignore(); 
        cout << "Enter Director Name: ";
        getline(cin, Director_Name);
        cout << "Enter Budget (in millions): ";
        cin >> Budget;
        cin.ignore();
    }

    void display() {
        cout << "\nMovie Name     : " << M_Name << endl;
        cout << "Release Year   : " << Release_Year << endl;
        cout << "Director Name  : " << Director_Name << endl;
        cout << "Budget         : $" << Budget << " million" << endl;
    }

    void writeToFile() {
        ofstream outFile("movies.txt", ios::app);
        if (outFile.is_open()) {
            outFile << M_Name << endl
                    << Release_Year << endl
                    << Director_Name << endl
                    << Budget << endl;
            outFile.close();
            cout << "\nMovie saved to file successfully!\n";
        } else {
            cout << "Error opening file for writing.\n";
        }
    }

    void readFromFile() {
        ifstream inFile("movies.txt");
        if (inFile.is_open()) {
            while (getline(inFile, M_Name)) {
                inFile >> Release_Year;
                inFile.ignore();
                getline(inFile, Director_Name);
                inFile >> Budget;
                inFile.ignore();
                display();
                cout << "--------------------------";
            }
            inFile.close();
        } else {
            cout << "Error opening file for reading.\n";
        }
    }
};

int main() {
    Movie m;
    int choice;

    do {
        cout << "\n--- Movie File Menu ---\n";
        cout << "1. Add New Movie\n";
        cout << "2. Display All Movies\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1:
                m.accept();
                m.writeToFile();
                break;
            case 2:
                m.readFromFile();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 3);

    return 0;
}
