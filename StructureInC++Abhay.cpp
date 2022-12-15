#include <iostream>
#include <string>

using namespace std;

struct Customer {
    string name;
    int AN;
    string address;
    int withdraw;
    int deposit;
};

int main() {
    
    Customer customers[10];


    for (int i = 0; i < 10; i++) {
        cout << "Enter the data of customer #" << i + 1 << ":" << endl;

        cout << "  Name: ";
        getline(cin, customers[i].name);

        cout << "  Account number: ";
        cin >> customers[i].AN;
        
          cout << " Withdraw Ammount: ";
        cin >> customers[i].withdraw;
        
          cout << " Deposit Amount: ";
        cin >> customers[i].deposit;



        cout << "  Address: ";
        cin.ignore();
        getline(cin, customers[i].address);
    }


    cout << endl << "Customers data:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "  Name: " << customers[i].name << endl;
        cout << "  AN: " << customers[i].AN << endl;
        cout << "  Address: " << customers[i].address << endl;
            cout << "  Withdraw Amount =: " << customers[i].withdraw<< endl;
                cout << "  Deposit Amount=: " << customers[i].deposit << endl;
    }

    return 0;
}

