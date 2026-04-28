#include<bits/stdc++.h>
using namespace std;
// take two numbers and print its sum

int sum(int num1 , int num2) {
    int num3 = num1 + num2;
    return num3;
}

int substract(int a, int b) {
    int c = a - b;
    return c;
}

string printName(string name) {
    string greet;

    if (name == "shubham") {
        greet ="hellow " + name;
    }
    else if (name == "sahil") {
        greet ="hellow how are you " + name;
    } else {
        greet = "Hey I dont remeber who are you";
    }
    return greet;


}


int main() {
    
    string name;
    cout << "Enter Your Name: ";
    cin >> name;

    string result1 = printName(name);
    cout << result1 << endl;

    string name2;
    cout << "Enter Your Name: ";
    cin >> name2;

    string result = printName(name2);
    cout << result <<endl;

    
    int num1 , num2;
    cout << "Enter Your Numbers: ";
    cin >> num1 >> num2;

    int res = sum(num1 ,num2);
    cout << "sum of two numbers: " << res;

    int a , b;
    cout << "Enter Your Numbers: ";
    cin >> a >> b;
    
    int sub = substract(a , b);
    cout << "Enter Your Numbers: ";
    cout << "substrac:" << sub << endl;



    return 0;
}



