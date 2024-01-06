#include <bits/stdc++.h>
using namespace std;
/*  
    ****
    ****
    ****
    ****
    print this pattern
*/
void pattern_1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << endl;

    }
}


int main (){

    int n;
     cout <<"Please Enter the Nub: ";
    cin >> n;
   
    pattern_1(n);

    return 0;
}