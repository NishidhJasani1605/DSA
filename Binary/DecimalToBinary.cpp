#include<iostream>
using namespace std;

int decTOBinary(int num)
{
    int ans =0 ,pow = 1;


    while(num >0){
        int rem = num%2;
        num = num/2;

        ans =ans + (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << decTOBinary(num) << endl;
}