#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the range of number" << endl;
    cin >> n;

    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

// output 
// Enter the range of number
// 5
// 1
// 22
// 333
// 4444
// 55555