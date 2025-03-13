#include<iostream>
using namespace std;
class counter{
    private:
    static int count;
    public:
    void countFunction(){
        count++;
        std::cout << "Count: " << count << std::endl;
    }
};
int counter::count=0;
    int main(){
        counter obj1, obj2;
        obj1.countFunction();
        obj2.countFunction();
        return 0;
    }
