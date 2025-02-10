#include<iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the Num of rows: " << endl;
    cin >> x;
    cout << "Enter the Num of columns: " << endl;
    cin >> y;

    int num = 1;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
         cout << num << " ";  
         num++; 
        }
        cout << endl;
    }
    return 0;
}

// output
// Enter the Num of rows: 
// 3
// Enter the Num of columns: 
// 3
// 1 2 3 
// 4 5 6
// 7 8 9