#include<iostream>
using namespace std;

class MATRIX {
    int a[5][5];  
    int row, col;

public:
    MATRIX(int x, int y) {
        row = x;
        col = y;
    }

    ~MATRIX() {
        cout << "Destructor called" << endl;
    }

    void getdata() {  
        cout << "Enter the elements of the matrix:" << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> a[i][j];
            }
        }
    }

    void display() {  
        cout << "Matrix elements are:" << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    int r, c;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> r >> c;

    if (r > 5 || c > 5) {
        cout << "Error: Maximum matrix size is 5x5." << endl;
        return 1;  
    }

    MATRIX m(r, c);
    m.getdata();
    m.display();

    return 0;
}
