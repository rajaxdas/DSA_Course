// #include<iostream>
// using namespace std;

// -------Functions 
    // void printName1(string name2){
    //     cout<<"Hey "<<name2 <<endl;
    // } 
    // void printName(string name) {
    //     cout<<"Hey "<<name <<endl;
    // }
// int main() {
    //int (it can only store elements data from(-2,147,483,648 to 2,147,483,647))
    // int x = 10;



    //long (same as int but it have larger range of values)
    // long x = 15;
    // cin>> x;

    // it can store larger value 
    // long long x = 150000000000;

    //float, double
    // float x = 5.6;
    // float y = 5; //an integer can also be stored in float
    // double z = 5; //we can also store integer in double

    // cout<< "Value of y: "<<y;
    

    //string 
    // string c;
    // cout<<"Enter your name: ";
    // cin>>c;
    // cout<<"Hey "<<c;


    //(getline)...if you want to print whole line in once just use getline

    // string str;
    // getline(cin, str);
    // cout << str;
    // return 0;


    //char
    // char ch = "hiii";
    // cin>>ch;
    // cout<<ch;

    //if-else statement (for age verification)
    // int age = 18;
    // cout<<"Enter your age: ";
    // cin>>age;
    // if(age <= 18) {
    //     cout<<"You are minor...";
    // } else {
    //     cout<<"You are an adult...";
    // }



    //practice question
    /*
    A school has following rules for grading system
    1. below 25 - F
    2. 24 to 24 - E
    3. 45 to 49 - D
    4. 50 to 59 - C
    5. 60 to 79 - B
    6. 80 to 100- A 
    ***Take user input as marks and give results
    */


    // int marks;
    // cout<<"Enter your marks: ";
    // cin>>marks;
    // if(marks < 25) {
    //    cout<<"Your grade is F";
    // } else if ( marks <= 44) {
    //    cout<<"Your grade is E";
    //  } else if ( marks <= 49) {
    //    cout<<"Your grade is D";
    //  } else if (marks <= 59) {
    //    cout<<"Your grade is C";
    //  } else if (marks <= 79) {
    //    cout<<"Your grade is B";
    // } else if (marks <= 100) {
    //    cout<<"Your grade is A";
    // } else {
    //     cout<<"Invlid Marks...";
    // }



    /*practice qustion----- nested if
    Take the age form user and then decide accoringly
    1. if age > 18
    print --> you can do job
    2. if age < 18 
    print --> you cannot do job
    3. if age >= 55 and age <= 57
    print-> eligible for jpb but retirement soon
    4. if agae-> 57
    print-> retirement time bbg....
    */


    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;

    // if(age < 18) {
    //     cout<<"Your are not eligible for job....";
    // } else if(age <= 57) {
    //     cout<<"You are eligible for job ";
    // } if(age >= 55) {
    //     cout<<"but retirement soon BBG...";
    // } else {
    //     cout<<"Retirement time shwaty";
    // }




    /*
    Switch statement 
    take the day no and print the corresponding day 
    for 1 print Monday,
    for 2 print tuesday and so on for 7 print sunday 
    */

    // int day;
    // cout<<"Enter the number for today day: ";
    // cin>>day; 

    // switch(day) {
    //     case 1:
    //         cout<<"Monday";
    //     break; 

    //     case 2:
    //         cout<<"Tuesday";
    //     break;

    //     case 3:
    //         cout<<"Wednesday";
    //     break;

    //     case 4:
    //         cout<<"Thursday";
    //     break;

    //     case 5:
    //         cout<<"Friday";
    //     break;

    //     case 6:
    //         cout<<"Saturday";
    //     break;

    //     case 7:
    //         cout<<"Sunday";
    //     break;
        
    //     default:
    //         cout<<"Invalid Case....check shwaty";
    // }


    //------->Array(1-D)<--------
    // int arr[5];
    // cout<<"Enter the elements of array: \n";
    // cin>>arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    

    // //we can also modify the existing element of the array.....
    // arr[3] = 40;


    // cout<<"The value of the third index is: "<<arr[3];

    //2-D Array----used to store element in row and columns wise.....

    // int arr[3][5];

    // arr[1][3] = 78;
    // cout<<arr[1][3]; //if we write any other index that have'nt declared then it will return a garbage value

 
    //Strings are also stored in index wise

    // string s = "Raja";

  
    // //we can check the size of string
    // int len = s.size(); 
    // cout<<"Size of the string is: "<<len<<endl; //-----> cout<<s[2]; //we can also print the last index of the string (cout<<s[len-1])<<-------


    // // we can change the value from a string
    // s[len - 1] = 'u';
    // cout<<"Last element of the string is: "<<s[len-1];


    // for loop(used to repeat a statement for again again)....

    // initilization(starting value)    #condition      #updation
    // for (int      i = 1;                  i <= 10;           i++) {
    //     // write the statement
    //     cout<<"Hii raja jii"<<endl;
    // }


    //while loop(runs the statement untill it became false)

    // int i=1; //initilization
    // while(i<=5) /*condition*/ {
    //     cout<<"Raja"<<endl;  //statement

    //     i = i + 1; //updation
    // }


    //do-while loop(runs the block of code atleast one time)

    // int i = 2;
    // do {
    //     cout<<"Raja"<<endl;
    //     i = i + 1;
    // } while (i<=5);


    //---------------------Functions---------------------
    //Functions are set of code which performs something for you
    //Functions are used to modularise code
    //Functions are used to increase readability
    //Functions are used to use same code multiple times
    
    
    // We can also pass parameters in functions like...
    // string name, name2;
    // cout<<"Enter your name: "<<name<<endl;
    // cin>> name >> name2;
    // printName(name);
    // printName1(name2);

    
    //Practice question------> Take two numbers and print its sum
   
    // int sum(int num1, int num2) {
    //     int num3 = num1 + num2;
    //     return num3;
    // }
    // int main() {
    // int  num1, num2;
    // cout<<"Enter two number: "<<endl;
    // cin>>num1 >> num2;

    // int res = sum(num1, num2);
    // cout<<res;
    
    // return 0;


//pass by value
// void doSomething(int num) {
//     cout << num << endl;
//     num +=5;
//     cout<<num << endl; 
//     num +=5;
//     cout<<num <<endl;

// }
//     int main() {
//         int num = 10;
//         doSomething(num);
//         cout << num << endl; //the original never changed ....   
//     }



//pass by reference.....//chnage the original value
// void doSomething(string &s) {
//     s[0] = 't';
//     cout<< s << endl;
// }
//     int main() {
//         string s  = "raj";
//         doSomething(s);
//         cout << s <<endl;
//         return 0; 
//     }
// }
