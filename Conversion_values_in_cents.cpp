#include <iostream>

using namespace std;

int main() {

    int amount {0}; 
    int dollars {0};
    int quarters {0};
    int dimes{0}, nickles{0}, pennies{0}, balance{0};
    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    const int penny {1};

    cout << "Enter the amount in cents: "<<endl;
    cin >> amount;

    dollars = amount/dollar;
    balance = dollar*dollars;
    quarters = (amount - balance)/quarter;
    balance += quarters*quarter;
    dimes = (amount - balance)/dime;
    balance += dimes*dime;
    nickles = (amount - balance)/nickel;
    balance += nickles*nickel;
    pennies = (amount - balance)/penny;
    balance += pennies*penny;

    cout << "Dollars: " << dollars <<endl;
    cout << "Quarters: " << quarters <<endl;
    cout << "Dimes: " << dimes <<endl;
    cout << "Nickles: " << nickles <<endl;
    cout << "Pennies: " << pennies <<endl;
    cout << "Remainder: " << balance <<endl;

    cout << endl;
    return 0;

}
