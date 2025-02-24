#include<iostream>
using namespace std;

class basex{
    protected:
    int x;
    public:
    void get_x (int a){x= a;};
};
class basey{
    protected:
    int y;
    public:
    void get_y (int b){y= b;};
};
class derived: public basex, public basey{
    public:
    void display(){
        cout<<"Value of x is "<<x<<"\n";
        cout<<"Value of y is "<<y<<"\n";
        cout<<"x+y = "<<x+y<<"\n";
    }
};
int main(){
    derived ob;
    ob.get_x(50);
    ob.get_y(60);
}