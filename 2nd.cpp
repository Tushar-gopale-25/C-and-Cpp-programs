#include<iostream>
#include<conio.h>
using namespace std;
float vol(int,int);
float vol(float);
int vol(float,int);

int main()
{
    int r,h;
    float r1;
    cout<<"Enter the radius of the cylinder: ";
    cin>>r;
    cout<<"Enter the height of the cylinder: ";
    cin>>h;
    cout<<"Enter the radius of the sphere: ";
    cin>>r1;
    cout<<"Volume of the cylinder is: "<<vol(r,h)<<endl;
    cout<<"Volume of the sphere is: "<<vol(r1)<<endl;
    cout<<"Volume of the cone is: "<<vol(r1,h)<<endl;
    getch();
    return 0;
}

float vol(int r, int h)
{
    return 3.14*r*r*h;
}

float vol(float r)
{
    return 1.33*3.14*r*r*r;
}

int vol(float r, int h)
{
    return 0.33*3.14*r*r*h;
}
