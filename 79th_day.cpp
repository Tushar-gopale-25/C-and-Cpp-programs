#include<iostream>
using namespace std;
inline int square(int num){
    return num*num;
}
inline int cube(int num){
    return num*num*num;
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Square of " << num << " is " << square(num) << endl;
    cout << "Cube of " << num << " is " << cube(num) << endl;
    return 0;
}