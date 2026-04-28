#include<iostream>
using namespace std;
// passing an arrya always goes with reference
void doSomething(int arr[] , int n) {
    arr[0] += 100;
    cout <<"value incide the function: " << arr[0] << endl;
}

int main() {

    int n = 5;
    int arr[n];

    for (int i = 0; i<n; i = i + 1) {
         cin >> arr[i];
    }
    
    for (int i = 0; i<n; i += 1) {
        cout << arr[i] <<" ";
    }

    doSomething(arr , n);

    cout <<"value incide the int main: " << arr[0] << endl;




    return 0;
}