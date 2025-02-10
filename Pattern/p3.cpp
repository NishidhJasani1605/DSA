#include <iostream>
using namespace std;

int main(){
      int x, y;
    cout << "Enter the Num of rows: " << endl;
    cin >> x;
    cout << "Enter the Num of columns: " << endl;
    cin >> y;

    for (int i = 0; i < x; i++)
    {
        char c ='A';
        for (int j = 0; j < y; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
    return 0;
}

// output
// Enter the Num of rows: 
// 5
// Enter the Num of columns: 
// 5
// A B C D E 
// A B C D E
// A B C D E 
// A B C D E
// A B C D E