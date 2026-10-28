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




//-------->print 0 and 1<--------
// #include <iostream>
// using namespace std;

// void print9(int n) {
//     for (int i = 0; i < n; i++) {
//         int start = (i % 2 == 0) ? 0 : 1;

//         for (int j = 0; j <= i; j++) {
//             cout << start;
//             start = 1 - start;
//         }

//         cout << endl;
//     }
// }

// int main() {
//     int t;
//     cin >> t;

//     for (int i = 0; i < t; i++) {
//         int n;
//         cin >> n;
//         print9(n);
//     }

//     return 0;
    
// }




// #include <iostream>
// using namespace std;

// void print10(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }

//         for (int j = 1; j <= 2 * (n - i); j++)
//         {
//             cout << " ";
//         }

//         for (int j = i; j >= 1; j--)
//         {
//             cout << j;
//         }

//         cout << endl;
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;

//     for (int k = 1; k <= t; k++)
//     {
//         int n;
//         cin >> n;
//         print10(n);
//     }

//     return 0;
// }

// <--------- print 1 to 15 in pyramid
// #include <iostream> 
// using namespace std;
// void print13(int n) {
//     int num = 1;
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=i; j++) {
//             cout<< num << " ";
//             num = num + 1;
//         }
//         cout<<endl;
//     }
// }

// int main() {
//     int t;
//     cin>> t;
//     for(int i=0; i<t; i++) {
//         int n;
//         cin>>n;
//         print13(n);
//     }
// }



//<-----print right angle traingle of alphabate

// #include<iostream>
// using namespace std;
// void print14(int n) {
//     for(int i=0; i<n; i++) {
//         for(char ch = 'A'; ch <='A' + i; ch++) {
//             cout<< ch << " ";
//         }
//         cout<<endl;
//     }
// }

// int main() {
//     int t;
//     cin >> t;
//     for(int i=0; i<t; i++) {
//         int n;
//         cin>>n;
//         print14(n);
//     }
// }



//<-----print reverse right angle traungle of alphabate----->

// #include<iostream>
// using namespace std;
// void print15(int n) {
//     for(int i=0; i<=n; i++) {
//         for(char ch = 'A'; ch <='A' + (n - i - 1); ch++) {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int t;
//     cin>>t;
//     for(int i=0; i<t; i++) {
//         int n;
//         cin>>n;
//         print15(n);
//     }
// }


//<-------print alphabate multiple times in pyramid-------->

// #include<iostream>
// using namespace std;
// void print16(int n) {
//     for(int i=0; i<=n; i++) {
//         char ch = 'A' + i;
//         for(int j=0; j<=i; j++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int t;
//     cin>>t;
//     for(int i=0; i<t; i++) {
//         int n;
//         cin>>n;
//         print16(n);
//     }
// }


//<----Print alphabate pyramid---->

#include<iostream>
using namespace std;
void print17(int n) {
    for(int i=0; i<=n; i++) {

        //Spaces
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }

        //Character
        char ch = 'A';
        for(int j = 0; j<2*n+1; j++) {
            cout<<ch;
        }

        //Spaces
        for(int j=0; j<n-i-1; j++) {
            cout<< " ";
        }
        cout<<endl;
    }
}

int main() {
     int t;
     cin>>t;
     for(int i=0; i<t; i++) {
         int n;
         cin>>n;
         print17(n);
     }
 }