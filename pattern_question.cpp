// #include<iostream>
// using namespace std;
// //print stars 4x4 
// void print1() {
//     for(int i=0; i<4; i++) {
//         for(int j=0; j<4; j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// int main() {
//     print1();
// }




//-------->print n stars<--------
// #include<iostream>
// using namespace std;
// void print2(int n) {
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// int main() {
//     int n;
//     cin>>n;
//     print2(n);
    
// }

// ------->print numbers<--------
// #include<iostream>
// using namespace std;
// void print1(int n) {
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//             cout<<j << " ";
//         }
//         cout<<endl;
//     }
// }
// int main() {
//     int t; 
//     cin>>t;
//     for(int i=0; i<t; i++) {
//         int n; 
//         cin>> n;
//         print1(n);
//     }

//     // return 0;
// }


// ------->repeating numbers<--------
// #include<iostream>
// using namespace std;
// void print4(int n) {
// for(int i=1; i<=n; i++) {
//     for(int j=1; j<=i; j++) {
//         cout<< i << " ";
//     }
//     cout<< endl;
//     }
// }
// int main() {
//     int t;
//     cin>>t;
//     int n;
//     cin>>n;
//     print4(n); 
// }

//------->print stars<--------
// #include<iostream>
// using namespace std;
// void print5(int n) {
//     for(int i=1; i<=n; i++) {
//         for(int j=0; j<n-i+1; j++) {
//             cout<< "*";
//         }
//         cout<<endl;
//     }
// }
// int main() {
//     int t;
//     cin>>t;
//     int n;
//     cin>>n;
//     print5(t);
// }



// --------->print numbers<--------
// #include<iostream>
// using namespace std;
//     void print6(int n) {
//         for(int i=1; i<n; i++) {
//             for(int j=1; j<n-i; j++) {
//                 cout<< j << "";
//             }
//             cout<<endl;
//         }
//     }
// int main() {
//     int t;
//     cin>>t;
//     int n;
//     cin>>n;
//     print6(t);
// }


// ------->print stars<--------
// #include<iostream>
// using namespace std;
// void print7(int n) {
//         for(int i=0; i<n; i++) {
//                 //space 
//                 for(int j=0; j<i; j++) {
//                         cout<<" ";
//                 }
//                 //star
//                 for(int j=0; j<2*n - (2*i + 1); j++) {
//                         cout<<"*";
//                 }
//                 for(int j=0; j<i; j++) {
//                         cout<<" ";
//                 }
//                 cout<<endl;
//         }
// }

//     void print6(int n) {
//         for(int i=0; i<n; i++) {
//                 // space

//         for(int j=0; j<n-i-1; j++) {
//                 cout<< " ";
//         }
//                 // star
//         for(int j=0; j<2*i+1; j++) {
//                 cout<<"*";
//         }
//                 // space
//         for(int j=0; j<n-i-1; j++) {
//                     cout<<" ";
//         }
//             cout<<endl;
//         }
//     }
// int main() {
//     int t;
//     cin>>t;
//     int n;
//     cin>>n;
//     print6(n);
//     print7(n);
// }


// #include<iostream>
// using namespace std;
// void print8(int n) {
//         for(int i = 1; i<=2*n-i; i++) {
//                 int stars = i;
//                 if( i>n ) stars = 2*n-i;
//                 for(int j=1; j<=stars; j++) {
//                         cout<<"*";
//                 }
//                 cout<<endl;
//         }
// }
// int main() {
//         int t;
//         cin>> t;
//         for(int i=0; i<t; i++) {
//                 int n; 
//                 cin>>n;
//                 print8(n);
//         }
// }





#include <iostream>
using namespace std;

void print9(int n) {
    for (int i = 0; i < n; i++) {
        int start = (i % 2 == 0) ? 0 : 1;

        for (int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }

        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        print9(n);
    }

    return 0;
}