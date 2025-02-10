#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the range of number" << endl;
    cin >> n;

    for (int i=0; i<n;i++)
    {
        for (int j=0;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// output 
// Enter the range of number
// 5
// *
// **
// ***
// ****
// *****