#include <iostream>
using namespace std;

class MyMatrix {
private:
    int matrix[10][10];
    int rows, cols;

public:

    void accept() {
        cout << "Enter number of rows: ";
        cin >> rows;
        cout << "Enter number of columns: ";
        cin >> cols;

        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j) {
                cout << "Element [" << i << "][" << j << "]: ";
                cin >> matrix[i][j];
            }
    }

    void display() const {
        cout << "Matrix:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j)
                cout << matrix[i][j] << "\t";
            cout << endl;
        }
    }

    MyMatrix operator-() {
        MyMatrix transposed;
        transposed.rows = cols;
        transposed.cols = rows;

        for (int i = 0; i < transposed.rows; ++i)
            for (int j = 0; j < transposed.cols; ++j)
                transposed.matrix[i][j] = matrix[j][i];

        return transposed;
    }

    MyMatrix operator++() {
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                ++matrix[i][j];
        return *this;
    }
};

int main() {
    MyMatrix m1, m2;

    m1.accept();
    
    cout << "\nOriginal ";
    m1.display();

    ++m1;
    cout << "\nMatrix after incrementing each element by 1:";
    m1.display();

    m2 = -m1;
    cout << "\nTranspose of the matrix:";
    m2.display();

    return 0;
}
