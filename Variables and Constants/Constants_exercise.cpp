//constants

#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Frank's Carpet Cleaning Service"<< endl;
    cout << "How many small rooms would you like cleaned?"<<endl;

    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;

    cout << "How many large rooms would you like cleaned?"<<endl;

    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;

    const double price_small {25};
    const double price_large {35};


    cout <<"\nEstimate for carpet cleaning service" <<endl;
    cout <<"Number of small rooms: " << number_of_small_rooms <<endl;
    cout <<"Number of large rooms: " << number_of_large_rooms <<endl;    
    cout <<"Price per small room: $" << price_small << endl;
    cout <<"Price per large room: $" << price_large << endl;
    cout <<"Cost: $"<< ((price_large*number_of_large_rooms) + (price_small*number_of_small_rooms)) <<endl; 
    cout <<"Tax: $" <<(price_large*number_of_large_rooms*0.06 + price_small*number_of_small_rooms*0.06) <<endl;
    cout <<"======================================"<<endl;
    cout << "Total estimate:$" << ((price_large*number_of_large_rooms + price_small*number_of_small_rooms) + (price_large*number_of_large_rooms*0.06 + price_small*number_of_small_rooms*0.06)) <<endl;
    cout << "This estimate is valid for " << 30 << " days" <<endl;

    return 0;
    

}
