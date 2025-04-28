#include <iostream>
#include <string>
using namespace std;

class Media {
public:
    virtual void accept() = 0;
    virtual void display() = 0;
};

class NewsPaper : public Media {
private:
    string N_Name;
    string N_Editor;
    float N_Price;
    int No_of_Pages;

public:
    void accept() override {
        cout << "\nEnter Newspaper Name: ";
        cin >> N_Name;
        cout << "Enter Editor Name: ";
        cin >> N_Editor;
        cout << "Enter Price: ";
        cin >> N_Price;
        cout << "Enter Number of Pages: ";
        cin >> No_of_Pages;
    }

    void display() override {
        cout << "\n--- Newspaper Info ---\n";
        cout << "Name: " << N_Name << endl;
        cout << "Editor: " << N_Editor << endl;
        cout << "Price: " << N_Price << endl;
        cout << "Pages: " << No_of_Pages << endl;
    }
};

class Magazine : public Media {
private:
    string M_Name;
    string M_Editor;
    float M_Price;

public:
    void accept() override {
        cout << "\nEnter Magazine Name: ";
        cin >> M_Name;
        cout << "Enter Editor Name: ";
        cin >> M_Editor;
        cout << "Enter Price: ";
        cin >> M_Price;
    }

    void display() override {
        cout << "\n--- Magazine Info ---\n";
        cout << "Name: " << M_Name << endl;
        cout << "Editor: " << M_Editor << endl;
        cout << "Price: " << M_Price << endl;
    }
};

int main() {
    
    Media* media[2];
    
    NewsPaper np;
    media[0] = &np;

    Magazine mg;
    media[1] = &mg;

    for (int i = 0; i < 2; ++i)
        media[i]->accept();

    for (int i = 0; i < 2; ++i)
        media[i]->display();

    return 0;
}
