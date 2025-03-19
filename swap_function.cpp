#include<iostream>
using namespace std;

void swapr(int &p, int &q)
{
    int dummy;
    p=q;
    q= dummy;
}

int main()
{
    cout<<"Befor swap"<<endl;
    int x=255, y=305;
    cout<<x<<"\t"<<y<<endl;
    swap(x,y);
    cout<<"After swap"<<endl;
    cout<<x<<"\t"<<y;
}