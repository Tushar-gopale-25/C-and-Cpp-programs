#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

class movie{
    public:
    int year;
    char name[20];
    char director[20];
    int budget;
    public:
    void accept(){
        cout<<"Enter the name of the movie: ";
        cin>>name;
        cout<<"Enter the name of the director: ";
        cin>>director;
        cout<<"Enter the year of release: ";
        cin>>year;
        cout<<"Enter the budget of the movie: ";
        cin>>budget;
    }
    
    void display(){
        cout<<"Name of the movie: "<<name<<endl;
        cout<<"Name of the director: "<<director<<endl;
        cout<<"Year of release: "<<year<<endl;
        cout<<"Budget of the movie: "<<budget<<endl;
    }
};

int main(){
    movie m;
    ofstream file;
    file.open("movie.txt", ios::out | ios::binary);
    m.accept();
    file.write((char*)&m, sizeof(m));
    file.close();
    ifstream file1;
    file1.open("movie.txt", ios::in | ios::binary);
    file1.read((char*)&m, sizeof(m));
    m.display();
    file1.close();
    return 0;
}