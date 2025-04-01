#include <iostream>
using namespace std;

class Box 
{
private:
    double length;
    
public:
    Box(double len) : length(len) {} 

    friend double getLength(Box b);
};

double getLength(Box b) 
{
    return b.length;
}

int main() 
{
    Box box(10.5);

    cout << "Length of the box: " << getLength(box) << endl;
    
    return 0;
}
