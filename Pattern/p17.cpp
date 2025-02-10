#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = n-i; j >0; j--){
            cout <<  " ";
        }
        for (int j = 1; j <= i; j++){
           cout << j  ;
        }
        if(i>1){
        for (int j = i-1;j>0; j--){
           cout << j ;
        }
    }
        cout << endl;
    }
}

// output
// Enter the size of the array: 5
//     1
//    121
//   12321
//  1234321
// 123454321