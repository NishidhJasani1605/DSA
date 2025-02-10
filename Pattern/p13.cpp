#include<iostream>
using namespace std;

int main(){
    int n , num=1;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = i; j >0; j--){
            cout << num << " " ;
            num++;
        }
        cout << endl;
    }
}

// output 
// Enter a number: 4
// 1 
// 2 3
// 4 5 6
// 7 8 9 10