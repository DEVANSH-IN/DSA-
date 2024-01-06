// #include<iostream>
// //this is basic skeleton of c++ it connstant in all programs,

// int main (){
//     std:: cout << "Hello Devansh" << "\n";

//     return 0;
// }

//taking the input  in c++ 
// #include<iostream>
// using namespace std;
// int main(){
//     //take the input in c++ 
//     int x, y;
//     cin >> x >> y;
//     cout <<"Value of x: " <<  x <<" " << "Value of y: " << y ;
//     return 0;
// }

//---------------------------------------------------------------
// Data-type 
// int 4byte 
//long 4 byte 
// long long 8 byte 
// for the flots 
// float 4 byte && doubel 8 byte && long double 10 byte 

// for the string 
#include<bits/stdc++.h>

using namespace std;
int main (){
    //taking  the strings as input 
    // we have to function 
    // string: it takes on till the space-bar means in nutshell one words at time 
    // getline: it picks up the entire string till the next line
    string str;
    getline(cin, str);
    cout << str;
    return 0;
}
