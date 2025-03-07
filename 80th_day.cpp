#include<iostream>
using namespace std;
inline long int fact(int num){
    if(num==0)
        return 1;
    else
        return num*fact(num-1);
}
 int main(){
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << "Factorial of " << num << " is " << fact(num) << endl;
        return 0;
 }
