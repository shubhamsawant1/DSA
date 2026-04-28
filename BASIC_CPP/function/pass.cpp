#include<iostream>
using namespace std;
// pass by reference its change the adress get it from adress, gets the origional value
void doSomething(int &num) {
    cout<< num <<endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    
}
// pass by value 
void dochange(string s) {
    s[0] = 'v'; 
    cout << s << endl;

}
int main() {
    string s = "mag"; 
    dochange(s); // pass copy 
    cout << s << endl; // origional remains  store somewere


    int num = 10;
    doSomething(num); // takes the original and sent is to the function
    cout << num << endl;



    return 0;

}