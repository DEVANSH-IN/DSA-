/* 
A college is following this garding system you have to implement the code accordingly
a. below 25 F
b. 25 to 44 E
c. 45 to 49 D 
d. 50 to 59 C
e. 60 to 79 B
f 80 to 100 A 
WAP if some gives num so he or she will get grade accordinly

*/
#include<bits/stdc++.h>
using namespace std;
int main (){
    int marks;
    cout << "Please Enter the marks ";
    cin >> marks;
    if(marks<=25){
        cout <<"Your garde is F";
    }
    else if (marks <=44){
        cout << "Your Grade is E";
    }
    else if (marks <=49){
        cout << "Your garde is D";
    }
     else if (marks <=59){
        cout << "Your garde is C";
    }
     else if (marks <=79){
        cout << "Your garde is B";
    }
     else if (marks <=100){
        cout << "Your garde is A";
    }

    return 0;
}
