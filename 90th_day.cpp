#include<iostream>
using namespace std;
    class product{
        int id,price,Qty;
        char i_name[20];
        static int cnt;
    public:
        void getdata(){
            cout<<"Enter the product id: ";
            cin>>id;
            cout<<"Enter the product name: ";
            cin>>i_name;
            cout<<"Enter the product price: ";
            cin>>price;
            cout<<"Enter the product quantity: ";
            cin>>Qty;
            cnt++;
        }
        void display(){
            cout<<"Product id: "<<id<<endl;
            cout<<"Product name: "<<i_name<<endl;
            cout<<"Product price: "<<price<<endl;
            cout<<"Product quantity: "<<Qty<<endl;
        }
        static void showcount(){
            cout<<"Total number of products: "<<cnt<<endl;
        }
    };
    int product::cnt;
    int main(){
        product p1,p2,p3;
        p1.getdata();
        p2.getdata();
        p3.getdata();
        p1.display();
        p2.display();
        p3.display();
        product::showcount();
        return 0;
    }