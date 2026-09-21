// swap two numbers

// #include<iostream>
// using namespace std;
// int main() {
//     int a;
//     int b;
//     cout<<"Enter the first number: ";
//     cin>>a;
//     cout<<"Enter the second number: ";
//     cin>>b;
//     swap(a, b);
//     cout<<"The value of first number after swapping is: "<<a <<endl;
//     cout<<"The value of second number after swapping is: "<<b <<endl;
//     return 0; 
    
// }


// factorail of a number....
#include<iostream>
using namespace std;
int main() {
    int n, i;
    long long fact = 1;
    cout<<"Enter a number: ";
    cin>>n;
    if(n < 0) {
        cout<<"Factorial is not defined for negative numbers";
    }
    else {
        for(int i=1; i<n; i++) {
        fact = fact*n;
        fact *=i;
        }
        cout<<"Factorial of" << n << "=" << fact;
    }
    return 0;
}