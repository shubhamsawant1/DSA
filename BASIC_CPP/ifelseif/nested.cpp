#include<iostream>
using namespace std;
/* 
Take the age from the user and than decide accordingly
1. If age < 18,
   print-> not eligible for job
   If age >= 18, and age <= 54,
   print -> "eligble for job"
   If age >= 55 and age <= 57,
   print -> "eligible for job , but retirement soon."
   If age > 57,
   print -> "retirement time"

*/
int main() {
   
     int age;
     cin >> age;

     if(age < 18) {
        cout<< "not eligible for job";

     }
     else if(age <= 54) {
           cout<< "eligble for job";
     }
      else if(age <= 57) {
           cout<< "eligible for job , but retirement soon.";
     }
      else {
           cout<< "Retirement Time! ";
     }
     

    return 0;
}