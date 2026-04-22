#include<iostream>
using namespace std;

int main() {
     // dataTypes : int , long , long long , float , double  

    // for character : string and getline
    // char

    string s1 , s2;  // if you want to get 2 strings define two strings
    cin >> s1 >> s2;
    cout <<s1 <<" "<< s2 <<endl;
    
    // if want to get entire line at one variable use getline datatypr

    string name;
    getline(cin, name);
    cout<< name <<endl;

    return 0;
}