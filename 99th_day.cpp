#include<iostream>
#include<conio.h>
using namespace std;
 
class integer{
    public:
    int x,y;
    void getdata();
    void display();
    void swap(int &,int &);
};

void integer::getdata(){
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
}

void integer::display(){
    cout<<"Value of x: "<<x<<endl;
    cout<<"Value of y: "<<y<<endl;
}

void integer::swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping: "<<endl;
    cout<<"Value of x: "<<a<<endl;
    cout<<"Value of y: "<<b<<endl;
}

int main(){
    int x,y;
    integer i;
    i.getdata();
    i.display();
    i.swap(x,y);
    return 0;
}