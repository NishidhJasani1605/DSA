#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            cout <<  " ";
        }
        for (int j = 0; j <= n-i; j++){
           cout << i ;
        }
        cout << endl;
    }
}

// output 
// Enter the size of the array: 5
//  11111
//   2222
//    333
//     44
//      5