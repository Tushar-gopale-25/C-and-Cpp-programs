#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    student(string n, int a){
        name = n;
        age = a;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

void modifyByValue(student s){
    s.age += 1;
    cout << "Inside modifyByValue function:" << endl;
    s.display();
}

void modifyByReference(student &s){
    s.age += 1;
    cout << "Inside modifyByReference function:" << endl;
    s.display();
}

int main(){
    student s1("Tushar", 20);
    cout << "Before modification:" << endl;
    s1.display();
    modifyByValue(s1);
    cout << "After modification:" << endl;
    s1.display();
    modifyByReference(s1);
    cout << "After modification:" << endl;
    s1.display();
    return 0;
}