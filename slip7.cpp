#include <iostream>
using namespace std;

class Vector {
private:
    int* arr;     
    int size;     

public:
    Vector(int s) {
        size = s;
        arr = new int[size];
    }

    Vector(const Vector& v) {
        size = v.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = v.arr[i];
        }
    }

    ~Vector() {
        delete[] arr;
    }

    void accept() {
        cout << "Enter " << size << " elements:\n";
        for (int i = 0; i < size; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    void display() const {
        cout << "(";
        for (int i = 0; i < size; i++) {
            cout << arr[i];
            if (i != size - 1)
                cout << ", ";
        }
        cout << ")\n";
    }

    int getSize() const {
        return size;
    }

    int getElement(int index) const {
        return arr[index];
    }

    friend Vector unionVector(const Vector& v1, const Vector& v2);
};

Vector unionVector(const Vector& v1, const Vector& v2) {
    int* temp = new int[v1.size + v2.size];
    int k = 0;

    for (int i = 0; i < v1.size; i++) {
        temp[k++] = v1.arr[i];
    }

    for (int i = 0; i < v2.size; i++) {
        bool found = false;
        for (int j = 0; j < k; j++) {
            if (temp[j] == v2.arr[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp[k++] = v2.arr[i];
        }
    }

    Vector result(k);
    for (int i = 0; i < k; i++) {
        result.arr[i] = temp[i];
    }

    delete[] temp;
    return result;
}

int main() {
    int size1, size2;
    cout << "Enter size of Vector 1: ";
    cin >> size1;
    Vector v1(size1);
    v1.accept();

    cout << "\nEnter size of Vector 2: ";
    cin >> size2;
    Vector v2(size2);
    v2.accept();

    cout << "\nVector 1: ";
    v1.display();

    cout << "Vector 2: ";
    v2.display();

    Vector v3 = unionVector(v1, v2);
    cout << "\nUnion of Vector 1 and Vector 2: ";
    v3.display();

    return 0;
}
