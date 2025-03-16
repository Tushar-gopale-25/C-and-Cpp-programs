#include<iostream>
using namespace std;
class sample{
    private:
    int k;
    public:
    sample(int p){
        k=p;
    }
    void display(){
        cout << "k: " << k << endl;
    }
};
int main(){
    sample s(10);
    s.display();
    return 0;
}