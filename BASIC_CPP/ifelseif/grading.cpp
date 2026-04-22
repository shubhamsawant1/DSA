#include<iostream>
using namespace std;
/*A School has following rules for grading system 
a. Below 25 - F 
b. Below 25 to 44 - E
c. Below 45 to 49 - D
d. Below 50 to 59 - C
e. Below 60 to 79 - B
f. Below 80 to 100 - A
Ask user to enter marks and print the corresponding grade */
int main() {

    int marks;
    cin >> marks;


    if(marks <= 25) {
        cout<<"GRADE: F";
    }
    else if(marks <= 44) {
        cout<<"GRADE:E";
    }  else if(marks <= 49) {
        cout<<"GRADE:D";
    }  else if(marks <= 59) {
        cout<<"GRADE:C";
    }  else if(marks <= 79) {
        cout<<"GRADE:B";
    }  else if(marks <= 100) {
        cout<<"GRADE:A";
    }
       
    return 0;

}