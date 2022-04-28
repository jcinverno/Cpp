#include <iostream>

using namespace std;

int main() 
{
/**********************************
 * 
int age {21};
cout << age << endl;

cout << "Enter the width of the room ";
int room_width {0};
cin >> room_width;

cout << "Enter the length of the room ";
int room_length {0};
cin >> room_length;

cout << "The area of the room is " << room_width*room_length << " square meters." <<endl;
*/
/******************
 *Character type
 ******************/

char middle_initial {'J'};
cout <<"My initial letter is "<<middle_initial<<endl;

/********************
 * Integer types 
 * *****************

unsigned short int exam_score {55};
cout <<"My exam score was " << exam_score <<endl;

int countries_represented {65};
cout << "There were " << countries_represented << " countries represented in my meeting." <<endl;

long people_in_florida {20610000};
cout << "There are about " << people_in_florida << " people in florida." <<endl;

long long people_on_earth {7600000000};
cout << "There are " << people_on_earth << " people on earth." << endl;

********************************
 * Floating point types
 * *****************************/

float car_payment {401.23};
cout << "My car payment is " << car_payment << endl;

double pi {3.14159};
cout << "PI is " << pi <<endl;

long double large_amount {2.7e120};
cout << large_amount << " is a very big number" <<endl;

/*****************
 * Boolean type
 ****************/

bool game_over {false};
cout << "The value of gameOver is " << game_over << endl;



return 0;
}