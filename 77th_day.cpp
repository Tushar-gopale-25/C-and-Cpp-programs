#include<iostream>
using namespace std;
int a=10;
int main(){
    int a=15;
    cout<<"\nLocal variable a:"<<a<<"\nGlobal variable a:"<<::a;
    ::a=20;
    cout<<"\nLocal variable a:"<<a<<"\nGlobal variable a:"<<::a;
    return 0;
}