#include <iostream>
using namespace std;

class book {
    int bookno;
    char bookname[50]; 
    char author[50];
    float price;
    
public:
    void getdata(); 
    void putdata();  
};

void book::getdata() {
    cout << "Enter book number: ";
    cin >> bookno;
    cin.ignore(); 

    cout << "Enter book name: ";
    cin.getline(bookname, 50); 

    cout << "Enter author: ";
    cin.getline(author, 50); 

    cout << "Enter price: ";
    cin >> price;
}

void book::putdata() {
    cout << "\nBook Details:\n";
    cout << "Book number: " << bookno << endl;
    cout << "Book name: " << bookname << endl;
    cout << "Author: " << author << endl;
    cout << "Price: " << price << endl;
}

int main() {
    book b;
    b.getdata();
    b.putdata();
    return 0;
}
