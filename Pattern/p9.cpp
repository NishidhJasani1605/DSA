#include<iostream>
using namespace std;

int main(){
    char c ='A';
    int n;
    cout << "Enter the range of number" << endl;
    cin >> n;

    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout << c;
        }
        c++;
        cout << endl;
    }

}

// output 
// Enter the range of number
// 5
// A
// BB
// CCC
// DDDD
// EEEEE