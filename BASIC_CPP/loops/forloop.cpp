#include<bits/stdc++.h>
using namespace std;

int main () {
    
    // cout << " I am shubham" 10 time insted of type it manuaaly use for loop
    // initialize the vale i = 1
    // i = 2 
    // i = 3
    // i = 4
    //i = 5
    // i = 6 so check i <= 5 than stop loop 
    int i;
    for ( i = 1; i<=5; i = i + 1) {  // declare i in loop so the scope for i is limited
        cout << "I am Shubham" << endl;
    }
     cout<< i << endl;
     // 
     for (int j = 5; j > 0; j = j - 1) {
            cout << "I am Shubham" << endl;
     }
    return 0;

}