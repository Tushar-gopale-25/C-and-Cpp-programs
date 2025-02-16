#include <iostream>
using namespace std;

class MyArray {
private:
    int **arr;
    int m, n;

public:
    // Dynamic Constructor
    MyArray(int rows, int cols) {
        m = rows;
        n = cols;
        arr = new int*[m];
        for (int i = 0; i < m; i++) {
            arr[i] = new int[n];
        }
    }

    // Function to input elements
    void inputElements() {
        cout << "Enter elements of the matrix (" << m << "x" << n << "):\n";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }
    }

    // Function to display sum of all elements
    void displaySum() {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                sum += arr[i][j];
            }
        }
        cout << "Sum of all elements: " << sum << endl;
    }

    // Destructor to free allocated memory
    ~MyArray() {
        for (int i = 0; i < m; i++) {
            delete[] arr[i];
        }
        delete[] arr;
        cout << "Memory freed.\n";
    }
};

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    MyArray matrix(m, n);
    matrix.inputElements();
    matrix.displaySum();
    
}