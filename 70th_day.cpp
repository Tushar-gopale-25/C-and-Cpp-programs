#include<iostream>
using namespace std;
class student {
    protected:
        int roll;
    public:
        void get(int x) {
            roll = x;
        }
        void display() {
            cout << roll;
        }
    };
    
class test: public student{
    protected:
    int mark1, mark2;
    public:
    void getmark(int a, int b)
    {
        mark1 = a;
        mark2 = b;
    }
    void dispmark(){
        cout<<mark1<<" "<<mark2;
    }
};
class sport{
    protected:
    int smark;
    public:
    void getsm(int s){
        smark = s;
    }
    void disps(){
        cout<<smark<<"\n";
    }
};
class result: public test, public sport{
    private:
    int total;
    public:
    void displaytotal(){
        total = mark1 + mark2 + smark;
        display();
        dispmark();
        disps();
        cout<<"total = "<<total;
    }
};
int main() {
    result r;
    r.get(10);
    r.getmark(50, 60);
    r.getsm(70);
    r.displaytotal();
    return 0;
}