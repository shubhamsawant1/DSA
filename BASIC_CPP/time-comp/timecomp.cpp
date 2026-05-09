#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int i = 0;

    for (i = 0; i < n; i += 1) {
        for (int j = 0; j <= i; j += 1){
            cout<< j;
        }
    }
      
    return 0;
}

// output: 0 01 012 0123 01234  time complexity = O (n * 2)