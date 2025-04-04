#include<iostream>
using namespace std;

class person{
    char name[20];
    char address[20];
    float sal,tax;
    public:
    void getdata(){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the address: ";
        cin>>address;
        cout<<"Enter the salary: ";
        cin>>sal;
    }

    void Putdata(){
        cout<<"Person Information: \n";
        cout<<"name\taddress\tsalary\ttax\n";
        cout<<"======================================================\n";
     
        cout<<name<<"\t"<<address<<"\t"<<sal<<"\t"<<tax<<endl;
    }
    void cal_tax(){
        if(sal=20000){
            tax=0;        
        }
        else if(sal>20000 && sal<=50000){
            tax=sal*0.1;
        }
        else if(sal>50000 && sal<=100000){
            tax=sal*0.2;
        }
        else if(sal>100000){
            tax=sal*0.3;
        }
    }
    
};

int main(){
    person p;
    p.getdata();
    p.cal_tax();
    p.Putdata();
    return 0;
}