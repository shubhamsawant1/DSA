#include<iostream>
using namespace std;
// write a program that takes an input of age
// and prints if you are adult or not
// if you are >= 18 , you are an adult
// = =  < 18 , you are not an adult
int main () {

    int age;
    cin >> age;
    
    if(age >= 18) {
        cout<< "You are an adult!";
     }
     else{
        cout<< "You are not an adult!"; // if you having if it is not mandatory to have an else statement
     }

    return 0;
}
