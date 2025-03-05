#include<iostream>
using namespace std;
void swapr(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int x=255, y=305;
    cout << "x: " << x << " y: " << y << endl;
    swapr(x, y);
    cout<<"After swapping:\n";
    cout << "x: " << x << " y: " << y << endl;
    return 0;
}