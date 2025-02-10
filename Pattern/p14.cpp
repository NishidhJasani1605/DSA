#include<iostream>
using namespace std;

int main(){
    int n ;
    char c = 'A';
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = i; j >0; j--){
            cout << c << " " ;
            c++;
        }
        cout << endl;
    }
}

// output
// Enter a number: 5
// A 
// B C
// D E F
// G H I J
// K L M N O 