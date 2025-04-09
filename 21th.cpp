#include<iostream>
#include<conio.h>
#include<iomanip>
#include<stdlib.h>
using namespace std;

class emp{
    public:
    int emp_id;
    char name[20];
    char companyname[30];
    int salary;
    public:
    void get(){
        cout<<"\nEnter Employee Details: \n";
        cin>>emp_id>>name>>companyname>>salary;
    }
    void put(){
        cout<<"\nEmployee ID: "<<emp_id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Company Name: "<<companyname<<endl;
        cout<<"Salary: "<<setfill('*')<<setw(7)<<salary<<endl;
        cout.setf(ios::right,ios::adjustfield);
    }
};

int main(){
    emp e;
    e.get();
    e.put();
    return 0;
}