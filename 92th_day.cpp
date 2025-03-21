#include <iostream>
using namespace std;

class MyArray {
private:
    int* arr;
    int size;

public:
    MyArray(int s) {
        size = s;
        arr = new int[size];
    }

    MyArray(const MyArray& other) {
        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }

    ~MyArray() {
        delete[] arr;
    }

    void accept() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void display() const {
        cout << "[ ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << "]" << endl;
    }

    MyArray operator+(const MyArray& other) {
        if (size != other.size) {
            cout << "Arrays must have the same size!" << endl;
            return *this;
        }
        MyArray temp(size);
        for (int i = 0; i < size; i++) {
            temp.arr[i] = arr[i] + other.arr[i];
        }
        return temp;
    }

    MyArray& operator=(const MyArray& other) {
        if (this == &other) return *this; 
        
        delete[] arr; 
        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
        return *this;
    }

    int& operator[](int index) {
        if (index < 0 || index >= size) {
            cout << "Index out of bounds!" << endl;
            exit(1);
        }
        return arr[index];
    }

    friend ostream& operator<<(ostream& out, const MyArray& obj) {
        out << "[ ";
        for (int i = 0; i < obj.size; i++) {
            out << obj.arr[i] << " ";
        }
        out << "]";
        return out;
    }
};

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    MyArray arr1(size);
    arr1.accept();
    cout << "Array 1: " << arr1 << endl;

    MyArray arr2 = arr1; 
    cout << "Copied Array: " << arr2 << endl;

    MyArray arr3(size);
    arr3.accept();
    cout << "Array 3: " << arr3 << endl;

    MyArray sum = arr1 + arr3; 
    cout << "Sum of arrays: " << sum << endl;

    return 0;
}
