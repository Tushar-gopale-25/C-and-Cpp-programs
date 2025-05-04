#include <iostream>
#include <string>
using namespace std;

class Seller {
private:
    string s_name;       
    string product_name; 
    int sales_quantity;  
    int target_quantity; 
    string month;        
    float commission;    

public:
    Seller() {
        s_name = "";
        product_name = "";
        sales_quantity = 0;
        target_quantity = 0;
        month = "";
        commission = 0.0;
    }

    void accept() {
        cout << "\nEnter Seller Name: ";
        cin >> s_name;
        cout << "Enter Product Name: ";
        cin >> product_name;
        cout << "Enter Sales Quantity: ";
        cin >> sales_quantity;
        cout << "Enter Target Quantity: ";
        cin >> target_quantity;
        cout << "Enter Month: ";
        cin >> month;
    }

    void calculateCommission() {
        if (sales_quantity > target_quantity) {

            commission = 0.25 * (sales_quantity - target_quantity) + 0.10 * target_quantity;
        }
        else if (sales_quantity == target_quantity) {

            commission = 0.10 * target_quantity;
        }
        else {
            commission = 0.0;
        }
    }

    void display() const {
        cout << "\nSeller Name: " << s_name;
        cout << "\nProduct Name: " << product_name;
        cout << "\nSales Quantity: " << sales_quantity;
        cout << "\nTarget Quantity: " << target_quantity;
        cout << "\nMonth: " << month;
        cout << "\nCommission: " << commission << endl;
    }
};

int main() {
    int n;

    cout << "Enter the number of salesmen: ";
    cin >> n;

    Seller sellers[n];

    for (int i = 0; i < n; ++i) {
        sellers[i].accept();
        sellers[i].calculateCommission();
    }

    cout << "\nSalesman Information and Commission:\n";
    for (int i = 0; i < n; ++i) {
        sellers[i].display();
    }

    return 0;
}
