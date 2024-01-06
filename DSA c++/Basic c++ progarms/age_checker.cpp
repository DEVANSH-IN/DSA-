// write a program that takes input of age and check it you are adult or not +
#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Please Enter your age: ";
    cin >> age;
    if (age >=18){
        cout << "You are an adult :)";

    }
    else if(age <18){
        cout << "You are a minor :(";
    }

    return 0;
}
