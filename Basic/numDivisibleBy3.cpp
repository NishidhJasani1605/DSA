#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout << "Enter the range of number" << endl;
    cin >> n;

    for (int i=0;i<=n;i++){
        if(i%3 ==0)
        {
            sum = sum +i;
        }
    }
    cout << "Sum of numbers divisible by 3 is " << sum << endl;
}