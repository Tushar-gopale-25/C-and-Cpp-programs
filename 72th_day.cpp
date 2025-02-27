#include<iostream>
using namespace std;
class abc{
    int i;
    public:
    abc(int v = 0){
        cout<<"In the constructor\n";
        i = v;
    }
    void print(void){
        cout<<"The value of i is: "<<i<<endl;
    }
};

int main(){
    abc a(10);
    abc b;
    a.print();
    b.print();
}