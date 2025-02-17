#include<iostream>
using namespace std;

int main (){
    int a=3 ,b=7;

    // BitwiseAnd
    cout << "Bitwise And: " << (a & b) << endl;

    // BitwiseOr
    cout << "Bitwise Or: " << (a | b) << endl;

    // BitwiseXor
    cout << "Bitwise Xor: " << (a ^ b) << endl;
    
    // Bitwise leftshift(n<<i where i is the number of bits to shift)
    // a <<b then ans = a*2^b
    cout << "Bitwise LeftShift: " << (10 << 1) << endl;

    // Bitwise rightshift(n>>i where i is the number of bits to shift)
    // a >>b then ans = a/2^b 
    cout << "Bitwise Right Shift: " << (10 >> 2) << endl;

    
}