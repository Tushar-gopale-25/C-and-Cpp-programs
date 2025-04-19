#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <fstream>
using namespace std;

#define ADMINUSER "admin"
#define ADMINPASSWORD "admin123"
#define USER "user"
#define USERPASSWORD "user123"
#define FINE 500

int addBook();
int deleteBook();
int updateBook();
int listOfAllBooks();
int borrowBook();
int returnBook();

int main() {
    int outerChoice = 0;
    while(outerChoice!=9){
        system("clear"); // use "cls" if supported
        cout<<"\n Library Management Version 1.0 \n\n";
        cout<<"\n1. Admin";
        cout<<"\n2. User";
        cout<<"\n9. Exit";
        cout<<"\n\nEnter your choice : ";
        cin>>outerChoice;
        
        if(outerChoice == 1){
            char adminUser[10], adminPassword[10];
            cout<<"\n Enter username: "; cin>>adminUser;
            cout<<" Enter password: "; cin>>adminPassword;

            if(strcmp(adminUser, ADMINUSER)==0 && strcmp(adminPassword, ADMINPASSWORD)==0){
                int innerChoice = 0;
                while(innerChoice != 9){
                    cout<<"\n1. Add Book";
                    cout<<"\n2. Update Book";
                    cout<<"\n3. Delete Book";
                    cout<<"\n4. List All Books";
                    cout<<"\n9. Exit";
                    cout<<"\nEnter choice: "; cin>>innerChoice;
                    switch(innerChoice){
                        case 1: addBook(); break;
                        case 2: updateBook(); break;
                        case 3: deleteBook(); break;
                        case 4: listOfAllBooks(); break;
                        default: cout<<"\nInvalid choice.";
                    }
                }
            } else {
                cout<<"\nInvalid credentials.\n";
            }
        } 
        else if(outerChoice == 2){
            char studentUser[10], studentPassword[10];
            cout<<"\n Enter username: "; cin>>studentUser;
            cout<<" Enter password: "; cin>>studentPassword;

            if(strcmp(studentUser, USER)==0 && strcmp(studentPassword, USERPASSWORD)==0){
                int innerChoice = 0;
                while(innerChoice != 9){
                    cout<<"\n1. Borrow Book";
                    cout<<"\n2. Return Book";
                    cout<<"\n3. List All Books";
                    cout<<"\n9. Exit";
                    cout<<"\nEnter choice: "; cin>>innerChoice;
                    switch(innerChoice){
                        case 1: borrowBook(); break;
                        case 2: returnBook(); break;
                        case 3: listOfAllBooks(); break;
                        default: cout<<"\nInvalid choice.";
                    }
                }
            } else {
                cout<<"\nInvalid credentials.\n";
            }
        }
    }
    return 0;
}

int addBook(){
    int bookid;
    char bookname[20], bookauthor[20];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    cout<<"\nEnter book ID: "; cin>>bookid;
    cout<<"Enter book name: "; cin>>bookname;
    cout<<"Enter author: "; cin>>bookauthor;

    char filename[20];
    sprintf(filename,"%d.dat", bookid);
    ofstream file(filename);
    file<<bookname<<"\n"<<bookauthor<<"\n"<<tm.tm_year+1900<<"\n";
    file.close();

    cout<<"\nBook added.\n";
    return 0;
}

int deleteBook(){
    int bookid;
    cout<<"\nEnter book ID to delete: ";
    cin>>bookid;
    char filename[20];
    sprintf(filename,"%d.dat", bookid);
    if(remove(filename) == 0)
        cout<<"\nBook deleted successfully.\n";
    else
        cout<<"\nBook not found.\n";
    return 0;
}

int updateBook(){
    int bookid;
    char bookname[20], bookauthor[20];
    cout<<"\nEnter book ID to update: ";
    cin>>bookid;
    cout<<"New name: "; cin>>bookname;
    cout<<"New author: "; cin>>bookauthor;

    char filename[20];
    sprintf(filename,"%d.dat", bookid);
    ofstream file(filename);
    file<<bookname<<"\n"<<bookauthor<<"\n";
    file.close();

    cout<<"\nBook updated.\n";
    return 0;
}

int listOfAllBooks(){
    cout<<"\nList of all book files (sample):\n";
    cout<<"Note: Cxxdroid may not allow full folder access.\n";
    cout<<"Try reading individual .dat files manually.\n";
    return 0;
}

int borrowBook(){
    int bookid;
    cout<<"\nEnter book ID to borrow: ";
    cin>>bookid;
    cout<<"Book borrowed. Return in 5 days to avoid ₹500 fine.\n";
    return 0;
}

int returnBook(){
    int bookid;
    cout<<"\nEnter book ID to return: ";
    cin>>bookid;
    int daysLate;
    cout<<"Enter number of days late: ";
    cin>>daysLate;
    if(daysLate > 5){
        int fine = (daysLate - 5) * FINE;
        cout<<"Late! Fine = ₹"<<fine<<"\n";
    } else {
        cout<<"Returned on time. No fine.\n";
    }
    return 0;
}