#include<iostream>
using namespace std;

class fraction{
    int num;
    int deno;
    public:
    fraction()
    {

    }
    fraction(int n,int d)
    {
        num=n;
        deno=d;
    }
    void display()
    {
        cout<<"\nThe numerator is: "<<num<<endl;
        cout<<"The denominator is: "<<deno<<endl;
        cout<<"The fraction is: "<<num<<"/"<<deno<<endl;
    }

    friend fraction operator+(fraction &, fraction &);
};

fraction operator+(fraction &p, fraction &q)
{
    fraction temp;
    temp.num=(p.num*q.deno)+(p.deno*q.num);
    temp.deno=p.deno*q.deno;
    return temp;
}

int main(){
    fraction f1(2,1);
    fraction f2(3,2);
    fraction f3;
    f1.display();
    f2.display();
    f3=f1+f2;
    cout<<"\nAfter adding the two fractions: "<<endl;
    f3.display();
    return 0;
}