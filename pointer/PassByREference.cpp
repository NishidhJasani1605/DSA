#include<iostream>
using namespace std;

void changeA(int a ,int *ptr){
    *ptr = 15; //pass by reference
    a = 10; //pass by value
}

int main(){

     int a =5;
     int b =10;
     changeA(a ,&b);

    cout << a << endl; // a not changed
    cout << b << endl; // b changed
    return 0;
}