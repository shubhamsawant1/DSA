#include<iostream>
using namespace std;
// Even or odd 

string isEven(int num) {
    string result3;
    if (num % 2 == 0) {
        result3 = to_string(num) + " is even number";
    } else {
        result3 = to_string(num) + " is odd number";
    }
    return result3;
}

int main() {
    int num1;
    cout << "Enter Your Number: ";
    cin >> num1;

    string answer = isEven(num1);
    cout << answer << endl;





    return 0;
}