#include<iostream>
using namespace std;

int main(){
    int x,y;
    char c ='A';
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    for (int i=0;i<x;i++){
        for (int j=0;j<y;j++){
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}

// output 
// Enter the first number: 5
// Enter the second number: 5
// A B C D E 
// F G H I J
// K L M N O 
// P Q R S T
// U V W X Y 