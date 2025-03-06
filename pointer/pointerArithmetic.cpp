#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int *p = &a;

    // increment and decrement
    cout << p<< endl; //0x61ff08
    p++;                // 4 bit added
    cout << p << endl;//0x61ff0c
    p--;                // 4 bit removed
    cout << p << endl; //0x61ff08

    // add and subtract
    p =p + 5; // 20 bit added  = 5*4
    cout << p << endl; //0x61ff1c


    // use in array
    int arr[] = {1,2,3,4,5};

    cout << arr << endl; //0x61fef4
    cout << *arr << endl;  //1
    cout  << arr+1 << endl; //0x61fef8
    cout << *(arr+1) << endl; //2


    //subtrection
    int *ptr1;
    int *ptr2 = ptr1+2;
 
    cout << ptr2 - ptr1 << endl; //2 = number of bytes
    
    // comparesion
    int *ptr3 ;
    int *ptr4 ;

    cout  << ptr3 << endl; //0x761b8c1d
    cout << ptr4 << endl; //0x61ff08

    cout << (ptr3 < ptr4) << endl;  // 0
    cout << (ptr3 > ptr4) << endl;  // 1

    return 0;
}