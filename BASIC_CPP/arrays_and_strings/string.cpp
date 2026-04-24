#include<bits/stdc++.h>
#include<string>
using namespace std;

int main () {
    string s = "shubahm";
    int len = s.size();

    // if want to change index value ' ' Change last value
    s[len - 1] = 'n';

    cout << len << endl;
    cout << s[3] <<endl;
    cout << s <<endl;
    return 0;

}