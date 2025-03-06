#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    cout << arr << endl; //address of arr[]
    cout << *arr << endl; //value at arr[0] = 1

    int a =5 ,b = 10;

    int *p = &a;
    p = &b;

    // arr = &a;   it shows error

    return 0;

}