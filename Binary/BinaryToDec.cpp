#include<iostream>
using namespace std;

int BinaryToDec(int n){
    int num =0 , pow =1;
    while(n>0){
        int rem = n%10;
        n = n/10;

        num = num +(rem*pow);
        pow = pow*2;
    }
    return num;
}

int main(){
    int n;
    cout << "Enter any binary number: ";
    cin >> n;

    cout << BinaryToDec(n) << endl;
    return 0;
}