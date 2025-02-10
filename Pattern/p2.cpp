#include<iostream>
using namespace std;

int main() {

    // Pattern 1

    int x, y;
    cout << "Enter the Num of rows: " << endl;
    cin >> x;
    cout << "Enter the Num of columns: " << endl;
    cin >> y;

    for (int i=1;i<=x;i++)
    {
        for (int j=1;j<=y;j++)
        {
            cout << "*" << " "  ;
        }
        cout << endl;
    }
    return 0;
}

// output:
// Enter the Num of rows: 
// 5
// Enter the Num of columns: 
// 5
// * * * * * 
// * * * * *
// * * * * * 
// * * * * *
// * * * * *