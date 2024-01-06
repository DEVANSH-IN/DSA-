#include <bits/stdc++.h>
using namespace std;

 //function are set of code which perform sometings for you
    //Functio are used to modularies the code
    // function are used to increase readbility
    // funtion are ueed to use some code multiple times 
    /*
    there are four types of function:
    1.void 
    2.return 
    3.parameter
    4. non parameter */

//void function 
void printName( string name){
    cout << "Hey " <<" " << name;
}

int main (){
    string name;
    cout <<"Please Enter Your name:";
    cin >> name;
   printName(name);

   return 0;
}
