#include<iostream>
using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};

    int sum = 0;

    for (int i=0;i<5 ; i++){
        sum = sum +a[i];
    }

    cout << "Sum of array elements is: " << sum << endl;
}