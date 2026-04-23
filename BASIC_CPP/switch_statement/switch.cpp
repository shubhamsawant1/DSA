#include<bits/stdc++.h>
using namespace std;
/* 
Take the day no add and print the corresponding day
for 1 print Monday
for 2 print tuesday and so on for day 7 sunday
*/
int main() {

    int day;
    cin >> day;

    switch(day) {
        case 1:
        cout<< "monday";
        break;

        case 2:
        cout<< "Tuesday";
        break;

        case 3: 
        cout<< "Wednesday";
        break;

        case 4:
        cout<< "Thursday";
        break;

        case 5:
        cout << "Friday";
        break;

        case 6:
        cout << "Saturday";
        break;

        case 7:
        cout << "sunday";
        break;

        default: 
        cout<< "Invalid it has to be 1 to 7  ";

    }
    cout<< "Enjoy your day";


    return 0;

}
