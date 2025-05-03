#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[10][10];
    int rows, cols;

public:
    void accept() {
        cout << "Enter number of rows and columns: ";
        cin >> rows >> cols;
        cout << "Enter elements of the matrix:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << "Element [" << i << "][" << j << "]: ";
                cin >> mat[i][j];
            }
        }
    }

    void display() {
        cout << "\nMatrix:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }

    void calculateSum() {
        int sum = 0;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                sum += mat[i][j];
            }
        }
        cout << "\nSum of all elements = " << sum << endl;
    }

    void displayTranspose() {
        cout << "\nTranspose of Matrix:\n";
        for (int j = 0; j < cols; ++j) {
            for (int i = 0; i < rows; ++i) {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m;

    m.accept();
    m.display();
    m.calculateSum();
    m.displayTranspose();

    return 0;
}
