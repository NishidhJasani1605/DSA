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
           cout << i  << " ";
        }
        cout << endl;
    }
}

// output 
// Enter the size of the array: 5
//  1 1 1 1 1 
//   2 2 2 2
//    3 3 3
//     4 4 
//      5